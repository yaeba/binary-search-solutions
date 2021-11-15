/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solveR(Tree *node, bool isRight)
{
    if (!node)
        return 0;
    else if (!(node->left) && !(node->right) && isRight)
        return node->val;
    return solveR(node->left, false) + solveR(node->right, true);
}

int solve(Tree *root)
{
    return solveR(root, false);
}
