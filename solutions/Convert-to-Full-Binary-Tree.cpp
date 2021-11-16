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
    else if (!(root->left) && !(root->right))
        return root;
    else if (root->left && root->right)
    {
        root->left = solve(root->left);
        root->right = solve(root->right);
        return root;
    }
    else
    {
        root = solve(root->left ? root->left : root->right);
        return root;
    }
}
