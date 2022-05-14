/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *l0, LLNode *l1)
{
    LLNode *res = new LLNode(-1);
    LLNode *curr = res;
    while (l0 && l1)
    {
        if (l0->val == l1->val)
        {
            curr->next = new LLNode(l0->val);
            curr = curr->next;
            l0 = l0->next;
            l1 = l1->next;
        }
        else if (l0->val < l1->val)
            l0 = l0->next;
        else
            l1 = l1->next;
    }

    return res->next;
}
