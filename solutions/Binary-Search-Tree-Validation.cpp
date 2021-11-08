/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solveR(Tree *node, int lower, int upper)
{
    if (!node)
    {
        return true;
    }
    else if (node->val < lower || node->val > upper)
    {
        return false;
    }
    return solveR(node->left, lower, node->val) && solveR(node->right, node->val, upper);
}

bool solve(Tree *root)
{
    return solveR(root, INT_MIN, INT_MAX);
}
