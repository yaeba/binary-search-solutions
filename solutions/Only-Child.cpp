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
    int onlyChild = (root->left && !(root->right)) || (!(root->left) && root->right);
    return onlyChild + solve(root->left) + solve(root->right);
}
