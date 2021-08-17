/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree *root, int target)
{
    if (!root || root->val > target)
    {
        return false;
    }
    else if (root->val == target)
    {
        return true;
    }

    return solve(root->left, target) || solve(root->right, target);
}
