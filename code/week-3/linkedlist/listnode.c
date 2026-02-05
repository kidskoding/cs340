#include "listnode.h"
#include <stdlib.h>

void init_node(ListNode *node, void* data) {
    node->data = data;
    node->next = NULL;
}

void destroy_node(ListNode *node) {
    free(node->data);
    node->data = NULL;
    node->next = NULL;
}