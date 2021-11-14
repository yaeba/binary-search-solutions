/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree *root)
{
    if (!root)
        return 0;
    return root->val + solve(root->left) + solve(root->right);
}
