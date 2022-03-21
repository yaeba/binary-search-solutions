/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *l0, LLNode *l1)
{
    if (!l0)
        return l1;
    l0->next = solve(l1, l0->next);
    return l0;
}
