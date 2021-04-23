/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode *node)
{
    int res = 0;

    for (LLNode *c = node; c; c = c->next)
    {
        res = res * 2 + c->val;
    }
    return res;
}
