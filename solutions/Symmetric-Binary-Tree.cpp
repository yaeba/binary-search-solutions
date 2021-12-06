/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solveR(Tree *a, Tree *b)
{
    if (a && b)
    {
        return a->val == b->val && solveR(a->left, b->right) && solveR(a->right, b->left);
    }
    return !a && !b;
}

bool solve(Tree *root)
{
    if (!root)
        return true;
    return solveR(root->left, root->right);
}
