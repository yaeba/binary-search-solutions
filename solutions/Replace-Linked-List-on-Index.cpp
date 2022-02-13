/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *a, LLNode *b, int lo, int hi)
{
    LLNode *dummy = new LLNode(-1, a);
    LLNode *left = dummy, *right = dummy;
    // find "left" and "right" such that
    // lo = 1, hi = 2
    //  a  = [1, 2, 3, 4, 5]
    //        ^     ^
    //       left  right
    //  b  = [10, 20, 30]
    // res = [1, 10, 20, 30, 4, 5]
    for (int i = 0; i <= hi; i++)
    {
        if (i < lo)
            left = left->next;
        right = right->next;
    }
    // insert b
    left->next = b;

    // join end of b back to a
    while (left->next)
        left = left->next;
    left->next = right->next;

    return dummy->next;
}
