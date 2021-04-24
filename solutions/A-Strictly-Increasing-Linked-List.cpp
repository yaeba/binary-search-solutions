/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode *head)
{
    if (!head)
        return true;

    int prev = head->val;

    for (LLNode *curr = head->next; curr; curr = curr->next)
    {
        if (curr->val <= prev)
            return false;
        prev = curr->val;
    }
    return true;
}
