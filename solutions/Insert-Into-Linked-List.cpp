/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *head, int pos, int val)
{
    LLNode *dummy = new LLNode();
    dummy->val = 3;
    dummy->next = head;
    LLNode *curr = dummy;

    while (curr)
    {
        if (pos == 0)
        {
            LLNode *node = new LLNode();
            node->val = val;
            node->next = curr->next;
            curr->next = node;
            break;
        }
        pos--;
        curr = curr->next;
    }
    return dummy->next;
}
