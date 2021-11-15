/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree *root, int k)
{
    if (root->left && root->left->val == k)
        return root->right->val;
    else if (root->right && root->right->val == k)
        return root->left->val;
    return solve(root->val > k ? root->left : root->right, k);
}
