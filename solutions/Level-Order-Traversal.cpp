/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree *root)
{
    vector<int> res;
    if (!root)
        return res;
    queue<Tree *> q;
    q.push(root);

    while (!q.empty())
    {
        Tree *node = q.front();
        q.pop();
        res.push_back(node->val);
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return res;
}