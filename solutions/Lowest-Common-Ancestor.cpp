/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree *solveR(Tree *node, int a, int b)
{
    if (!node)
        return nullptr;
    else if (node->val == a || node->val == b)
        return node;

    Tree *left = solveR(node->left, a, b);
    Tree *right = solveR(node->right, a, b);

    if (left && right)
        return node;
    return left ? left : right;
}

int solve(Tree *root, int a, int b)
{
    Tree *lowestCommon = solveR(root, a, b);
    solveR(root, a, b);
    return lowestCommon ? lowestCommon->val : -1;
}
