/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void solveR(Tree *node, int idx, vector<int> &res)
{
    if (!node)
        return;
    if (res.size() <= idx)
        res.push_back(0);
    res[idx] += node->val;
    solveR(node->right, idx, res);
    solveR(node->left, idx + 1, res);
}

vector<int> solve(Tree *root)
{
    vector<int> res;
    solveR(root, 0, res);
    return res;
}
