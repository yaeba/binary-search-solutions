/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solveR(Tree *node, int *res)
{
    // similar to "Largest Tree Sum Path"
    // in this recursive function, do two things:
    // 1. update the global max seen so far, ie "res"
    // 2. return the longest path from this node
    if (!node)
        return 0;
    int left = solveR(node->left, res);
    int right = solveR(node->right, res);
    *res = max(*res, left + right + 1);
    return 1 + max(left, right);
}

int solve(Tree *root)
{
    int res = 0;
    solveR(root, &res);
    return res;
}
