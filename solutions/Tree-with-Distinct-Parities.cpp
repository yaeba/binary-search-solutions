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
    int sum = left + right;

    if (node->left && node->right && sum % 2)
    {
        (*res)++;
    }
    return sum + node->val;
}

int solve(Tree *root)
{
    int res = 0;
    solveR(root, &res);
    return res;
}
