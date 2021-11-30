/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int height(Tree *node, bool *res)
{
    if (!node || !res)
        return 0;
    int left = height(node->left, res);
    int right = height(node->right, res);

    if (abs(left - right) > 1)
    {
        *res = false;
    }
    return max(left, right) + 1;
}

bool solve(Tree *root)
{
    bool res = true;
    height(root, &res);
    return res;
}
