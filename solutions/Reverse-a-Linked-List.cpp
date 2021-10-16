/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    LLNode* prev = NULL;

    while (node) {
        LLNode* tmp = node->next;
        node->next = prev;
        prev = node;
        node = tmp;
    }

    return prev;
}
