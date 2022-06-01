/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int k)
{
    if (!node)
        return NULL;

    // similar to how we reverse linked list
    // just reverse first k, and use recursion (k+1)th
    LLNode *prev = NULL;
    LLNode *curr = node;

    for (int i = 0; i < k && curr; i++)
    {
        LLNode *tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }

    node->next = solve(curr, k);

    return prev;
}
