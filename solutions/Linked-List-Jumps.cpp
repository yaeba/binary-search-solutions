/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node)
{
    // keep this for final ans
    LLNode *res = node;

    while (node)
    { // repeat
        LLNode *curr = node;

        // jump "step" amount of times
        for (int i = node->val; i > 0 && node; i--)
        {
            node = node->next;
        }

        // assign
        curr->next = node;
    }

    return res;
}
