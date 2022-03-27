/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int treeSum(Tree *node)
{
    if (!node)
        return 0;
    return node->val + treeSum(node->left) + treeSum(node->right);
}

int maxProduct(Tree *node, int totalSum, int *res)
{
    if (!node)
        return 0;
    int left = maxProduct(node->left, totalSum, res);
    int right = maxProduct(node->right, totalSum, res);

    *res = max(*res, max((totalSum - left) * left, (totalSum - right) * right));

    return left + right + node->val;
}

int solve(Tree *root)
{
    int res = 0;
    int totalSum = treeSum(root);
    maxProduct(root, totalSum, &res);
    return res;
}
