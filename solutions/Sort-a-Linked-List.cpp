/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(LLNode *node)
{
    vector<int> v;
    LLNode *curr = node;
    for (; curr; curr = curr->next)
        v.push_back(curr->val);
    sort(v.begin(), v.end());
    curr = node;
    for (int i = 0; curr; i++, curr = curr->next)
        curr->val = v[i];

    return node;
}
