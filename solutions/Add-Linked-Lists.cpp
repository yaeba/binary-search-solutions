/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *l0, LLNode *l1)
{
    LLNode *dummy = new LLNode(-1);
    LLNode *curr = dummy;
    int carry = 0;

    while (l0 || l1 || carry)
    {
        int sum = 0;
        if (l0)
        {
            sum += l0->val;
            l0 = l0->next;
        }
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (carry)
            sum++;
        carry = sum / 10;
        sum %= 10;
        curr->next = new LLNode(sum);
        curr = curr->next;
    }

    return dummy->next;
}
