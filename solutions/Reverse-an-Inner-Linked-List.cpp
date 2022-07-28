/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int i, int j)
{
    if (i)
    {
        // don't reverse, continue recursion
        node->next = solve(node->next, i - 1, j - 1);
        return node;
    }

    // reverse and return
    LLNode *prev = NULL, *curr = node;

    for (int k = 0; k <= j && curr; k++)
    {
        LLNode *tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }

    node->next = curr;
    return prev;
}
