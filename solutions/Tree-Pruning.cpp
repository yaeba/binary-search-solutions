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
    root->left = solve(root->left);
    root->right = solve(root->right);
    return (root->val == 0 && !(root->left) && !(root->right)) ? nullptr : root;
}
