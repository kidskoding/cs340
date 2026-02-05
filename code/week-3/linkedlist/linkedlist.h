#include "listnode.h"

typedef struct LinkedList {
    ListNode *head;
    ListNode *tail;
    int size;
} LinkedList;

void init_lst(LinkedList *lst);
void add_node(LinkedList *lst, ListNode *node);
void insert_node(LinkedList *lst, ListNode *node, int idx);
void* remove_node(LinkedList *lst, int idx);
ListNode* find(LinkedList *lst, int idx);
void destroy_lst(LinkedList *lst);