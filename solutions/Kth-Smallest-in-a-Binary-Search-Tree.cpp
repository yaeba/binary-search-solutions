/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void solveR(Tree *root, int k, int *idx, int *res)
{
    if (!root)
        return;
    if (*idx <= k)
    {
        solveR(root->left, k, idx, res);
        (*idx)++;
        if (*idx == k)
        {
            *res = root->val;
            return;
        }
        solveR(root->right, k, idx, res);
    }
}

int solve(Tree *root, int k)
{
    int res = 0;
    int idx = -1;
    solveR(root, k, &idx, &res);
    return res;
}
