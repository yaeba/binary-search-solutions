/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree *root)
{
    if (!root)
    {
        return true;
    }
    else if (!(root->left) && !(root->right))
    {
        return true;
    }
    else
    {
        int l = root->left ? root->left->val : 0;
        int r = root->right ? root->right->val : 0;
        return l + r == root->val && solve(root->left) && solve(root->right);
    }

    return false;
}
