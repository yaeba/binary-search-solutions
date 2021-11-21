/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int k)
{
    LLNode *curr = node;
    int size = 1;
    // find size and connect end to start (infinite loop)
    for (; curr->next; curr = curr->next, size++)
        ;
    curr->next = node;

    int idx = size - k;
    // break infinite loop at (size - k) and return result
    for (; idx; curr = curr->next, idx--)
        ;
    LLNode *res = curr->next;
    curr->next = nullptr;
    return res;
}
