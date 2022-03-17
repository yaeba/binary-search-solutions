/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int k)
{
    // eg when k = 2, maintain the following pointers
    // node -> node -> a -> node -> b -> node -> c (last)
    LLNode *a = node, *b = node, *c = node;
    int i = 1;

    while (c->next)
    {
        if (i > k)
            b = b->next;
        else
            a = a->next;
        c = c->next;
        i++;
    }

    int tmp = a->val;
    a->val = b->val;
    b->val = tmp;

    return node;
}
