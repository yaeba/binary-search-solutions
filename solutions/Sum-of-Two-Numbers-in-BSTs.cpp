/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree *a, Tree *b, int target)
{
    if (!a || !b)
    {
        return false;
    }
    int sum = a->val + b->val;
    if (sum == target)
    {
        return true;
    }
    else if (sum < target)
    {
        return solve(a->right, b->right, target) || solve(a->right, b, target) ||
               solve(a, b->right, target);
    }
    else
    {
        return solve(a->left, b->left, target) || solve(a->left, b, target) ||
               solve(a, b->left, target);
    }
}
