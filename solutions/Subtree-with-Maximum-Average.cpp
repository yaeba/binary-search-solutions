/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
pair<int, int> solveR(Tree *node, double *res)
{
    if (!node)
        return {0, 0};
    pair<int, int> left = solveR(node->left, res);
    pair<int, int> right = solveR(node->right, res);
    pair<int, int> curr = {left.first + right.first + node->val, left.second + right.second + 1};
    double avg = curr.first * 1.0 / curr.second;
    if (avg > *res)
        *res = avg;
    return curr;
}

double solve(Tree *root)
{
    double res = 0;
    solveR(root, &res);
    return res;
}
