/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree *solve(Tree *root)
{
    if (!root)
        return nullptr;
    Tree *tmp = solve(root->right);
    root->right = solve(root->left);
    root->left = tmp;
    return root;
}
