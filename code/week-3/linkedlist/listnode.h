typedef struct ListNode {
    void *data;
    struct ListNode *next;
} ListNode;

void init_node(ListNode *node, void *data);
void destroy_node(ListNode *node);