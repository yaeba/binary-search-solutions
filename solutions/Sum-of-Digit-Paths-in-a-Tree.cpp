/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solveR(Tree *node, int acc)
{
    if (!node)
        return 0;
    int newAcc = 10 * acc + node->val;
    if (node->left || node->right)
    {
        return solveR(node->left, newAcc) + solveR(node->right, newAcc);
    }
    else
    {
        return newAcc;
    }
}

int solve(Tree *root)
{
    return solveR(root, 0);
}
