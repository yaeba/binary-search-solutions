/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solveR(Tree *node, int *res)
{
    if (!node)
        return 0;
    int nodeSum = node->val + solveR(node->left, res) + solveR(node->right, res);
    *res = max(*res, nodeSum);
    return nodeSum;
}

int solve(Tree *root)
{
    int res = 0;
    solveR(root, &res);
    return res;
}
