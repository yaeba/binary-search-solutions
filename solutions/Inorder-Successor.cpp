/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree *root, int t)
{
    int res = INT_MAX;
    while (root)
    {
        if (root->val > t)
        {
            res = std::min(res, root->val);
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return res;
}
