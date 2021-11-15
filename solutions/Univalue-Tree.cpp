/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solveR(Tree *node, int val)
{
    return !node || (node->val == val && solveR(node->left, val) && solveR(node->right, val));
}

bool solve(Tree *root)
{
    if (!root)
        return false;
    return solveR(root, root->val);
}
