/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int k)
{
    LLNode *aa = new LLNode(0);
    LLNode *bb = new LLNode(0);
    LLNode *cc = new LLNode(0);
    LLNode *a = aa, *b = bb, *c = cc;

    for (LLNode *curr = node; curr; curr = curr->next)
    {
        if (curr->val < k)
        {
            a->next = curr;
            a = a->next;
        }
        else if (curr->val == k)
        {
            b->next = curr;
            b = b->next;
        }
        else
        {
            c->next = curr;
            c = c->next;
        }
    }

    a->next = bb->next;
    b->next = cc->next;
    c->next = NULL;

    return aa->next;
}
