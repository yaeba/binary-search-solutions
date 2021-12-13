/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *ll0, LLNode *ll1)
{
    if (!ll0)
        return ll1;
    if (!ll1)
        return ll0;
    if (ll0->val == ll1->val)
    {
        LLNode *t = ll0;
        while (ll0 && ll0->val == t->val)
            ll0 = ll0->next;
        while (ll1 && ll1->val == t->val)
            ll1 = ll1->next;
        t->next = solve(ll0, ll1);
        return t;
    }
    else if (ll0->val > ll1->val)
    {
        ll1->next = solve(ll0, ll1->next);
        return ll1;
    }
    else
    {
        ll0->next = solve(ll0->next, ll1);
        return ll0;
    }
}
