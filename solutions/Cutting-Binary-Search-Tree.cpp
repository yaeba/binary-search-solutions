/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree *solve(Tree *root, int lo, int hi)
{
    if (!root)
        return nullptr;
    root->left = solve(root->left, lo, hi);
    root->right = solve(root->right, lo, hi);
    if (root->val < lo)
        return root->right;
    else if (root->val > hi)
        return root->left;
    else
        return root;
}
