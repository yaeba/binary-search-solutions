/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode *node)
{
    int len = 0;

    for (LLNode *curr = node; curr != NULL; curr = curr->next)
    {
        len++;
    }
    return len;
}
