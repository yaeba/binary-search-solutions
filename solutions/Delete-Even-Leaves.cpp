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
    if (root->val % 2 == 0 && !(root->le ft) && !(root->right))
        return nullptr;
    return root;
}
