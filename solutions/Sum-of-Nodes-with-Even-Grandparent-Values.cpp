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
    {
        return 0;
    }
    int left = solveR(node->left, res);
    int right = solveR(node->right, res);
    if (node->val % 2 == 0)
    {
        *res += left + right;
    }
    return (node->left ? node->left->val : 0) + (node->right ? node->right->val : 0);
}

int solve(Tree *root)
{
    int res = 0;
    solveR(root, &res);
    return res;
}
