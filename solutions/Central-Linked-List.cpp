/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode *node)
{
    // standard slow and fast pointers problem
    LLNode *slow = node;
    LLNode *fast = node;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}
