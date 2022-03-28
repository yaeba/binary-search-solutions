/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node)
{
    // find length of linked list
    int len = 0;
    for (LLNode *curr = node; curr; curr = curr->next)
        len++;

    // find mid node, use a stack to store left part
    LLNode *res = node;
    stack<int> st;
    for (int i = 0; i < len / 2; i++)
    {
        st.push(res->val);
        res = res->next;
    }

    // merge left and right
    LLNode *right = len % 2 == 0 ? res : res->next;
    while (!st.empty())
    {
        right->val += st.top();
        right = right->next;
        st.pop();
    }

    return res;
}
