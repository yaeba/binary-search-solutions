/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int solveRecursive(Tree *node, int *result)
{
    if (!node)
    {
        // base case
        return INT_MIN;
    }

    int maxLeft = solveRecursive(node->left, result);
    int maxRight = solveRecursive(node->right, result);

    if (node->val >= maxLeft && node->val >= maxRight)
    {
        (*result)++;
        return node->val;
    }
    else
    {
        return std::max(maxLeft, maxRight);
    }
}

int solve(Tree *root)
{
    int res = 0;
    solveRecursive(root, &res);
    return res;
}
