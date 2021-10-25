/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool checkPalindrome(LLNode **left, LLNode *right)
{
    // recursive solution by Kayb
    if (right == NULL)
        return true;
    bool check = checkPalindrome(left, right->next);
    if ((*left)->val != right->val)
        return false;
    *left = (*left)->next;
    return check;
}

bool solve(LLNode *node)
{
    LLNode *right = node;
    return checkPalindrome(&node, right);
    // int len = 0;
    // LLNode* ptr = node;
    // for (LLNode* p = node; p; p = p->next) {
    //     len++;
    // }
    // float mid = (len - 1) / 2.0;
    // stack<int> st;
    // for (int i = 0; i < len; i++, node = node->next) {
    //     if (i < mid) {
    //         st.push(node->val);
    //     } else if (i > mid) {
    //         if (st.top() != node->val) {
    //             return false;
    //         }
    //         st.pop();
    //     }
    // }
    // return true;
}
