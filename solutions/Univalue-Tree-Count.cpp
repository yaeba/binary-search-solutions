/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solveR(Tree *root, int *res)
{
    if (!root)
        return true;
    bool leftUni = solveR(root->left, res);
    bool rightUni = solveR(root->right, res);
    if (leftUni && (!(root->left) || root->val == root->left->val) && rightUni &&
        (!(root->right) || root->val == root->right->val))
    {
        (*res)++;
        return true;
    }
    return false;
}

int solve(Tree *root)
{
    int res = 0;
    solveR(root, &res);
    return res;
}
