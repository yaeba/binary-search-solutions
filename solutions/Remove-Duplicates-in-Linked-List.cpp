/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node)
{
    if (node == NULL)
        return NULL;

    LLNode *head = node;
    LLNode *prev = head;
    LLNode *curr = head->next;

    unordered_set<int> s;
    s.insert(prev->val);

    while (curr)
    {
        int val = curr->val;

        if (s.find(val) != s.end())
        {
            // found, it is a duplicate
            curr = curr->next;
        }
        else
        {
            // not a duplicate, assign
            s.insert(val);
            prev->next = curr;
            prev = prev->next;
            curr = curr->next;
        }
    }
    prev->next = curr;
    return head;
}
