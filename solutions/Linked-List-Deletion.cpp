/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int target)
{
    LLNode *dummy = new LLNode{0, node};
    LLNode *prev = dummy;

    for (LLNode *curr = dummy->next; curr; curr = curr->next)
    {
        if (curr->val == target)
            continue;
        else
        {
            prev->next = curr;
            prev = curr;
        }
    }
    prev->next = NULL;

    return dummy->next;
}
