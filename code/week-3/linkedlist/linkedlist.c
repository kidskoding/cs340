#include "linkedlist.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void init_lst(LinkedList *lst) {
    lst->head = NULL;
    lst->tail = NULL;
}

void add_node(LinkedList *lst, ListNode *node) {
    if(lst->size == 0) {
        lst->head = node;
        lst->tail = node;
    } else {
        lst->tail->next = node;
        lst->tail = node;
    }
}

void insert_node(LinkedList *lst, ListNode *node, int idx) {
    if(idx > lst->size || idx < 0) {
        printf("index out of bounds exception! cannot insert node at this index!\n");
        return;
    }

    if(idx == 0) {
        node->next = lst->head;
        lst->head = node;
        if(lst->size == 0) {
            lst->tail = node;
        }
    } else if(idx == lst->size) {
        add_node(lst, node);
    } else {
        ListNode* nodeAtIdx = find(lst, idx - 1);
        node->next = nodeAtIdx->next;
        nodeAtIdx->next = node;
    }

    lst->size++;
}

void* remove_node(LinkedList* lst, int idx) {
    ListNode *toRem = find(lst, idx);
    if(toRem == NULL) {
        return NULL;
    }

    if(idx == 0) {
        lst->head = toRem->next;
        if(lst->size == 1) {
            lst->tail = NULL;
        }
    } else {
        ListNode *prev = find(lst, idx - 1);
        prev->next = toRem->next;
        if(idx == lst->size - 1) {
            lst->tail = prev;
        }
    }

    void *data = toRem->data;
    free(toRem);
    lst->size--;
    
    return data;
}

ListNode* find(LinkedList *lst, int idx) {
    if(idx < 0 || idx >= lst->size) {
        return NULL;
    }

    ListNode* curr = lst->head;
    int i = 0;
    while(i < idx) {
        curr = curr->next;
        i += 1;
    }

    return curr;
}

void destroy_list(LinkedList *lst) {
    free(lst->head);
    free(lst->tail);

    lst->head = NULL;
    lst->tail = NULL;
}