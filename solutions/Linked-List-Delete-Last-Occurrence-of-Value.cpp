/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node, int target)
{
    // let node A and B be
    // node -> ... -> A -> B (target) -> ...
    // find node A
    LLNode *a = NULL;
    LLNode *dummy = new LLNode(0, node);
    for (LLNode *prev = dummy, *curr = node; curr; prev = curr, curr = curr->next)
    {
        if (curr->val == target)
            a = prev;
    }
    // remove node B
    if (a)
        a->next = a->next->next;
    return dummy->next;
}
