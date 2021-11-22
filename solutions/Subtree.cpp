/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool sameTree(Tree *a, Tree *b)
{
    if (!a && !b)
        return true;
    return a && b && a->val == b->val && sameTree(a->left, b->left) && sameTree(a->right, b->right);
}

bool solve(Tree *root0, Tree *root1)
{
    if (!root0)
        return false;
    return sameTree(root0, root1) || solve(root0->left, root1) || solve(root0->right, root1);
}
