/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode *node, int k)
{
    LLNode *slow = node;
    LLNode *fast = node;
    int i = 0;
    while (fast)
    {
        if (i > k)
            slow = slow->next;
        fast = fast->next;
        i++;
    }
    return slow->val;
}
