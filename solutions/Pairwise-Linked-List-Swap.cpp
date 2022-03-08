/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node)
{
    if (!node || !(node->next))
        return node;

    // Let a -> b -> (c1 -> c2 -> ...)
    // be  a -> b ->  c
    LLNode *a = node;
    LLNode *b = node->next;
    LLNode *c = solve(b->next);

    // we want b -> a -> c
    b->next = a;
    a->next = c;

    return b;
}
