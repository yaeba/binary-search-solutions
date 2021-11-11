/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int val) {
    if (!root) return false;
    else if (root->val == val) return true;
    return solve(val < root->val ? root->left : root->right, val);
}
