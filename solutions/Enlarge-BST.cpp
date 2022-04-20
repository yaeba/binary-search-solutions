/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void solveR(Tree *node, int *sum)
{
    if (!node)
        return;
    solveR(node->right, sum);
    *sum += node->val;
    node->val = *sum;
    solveR(node->left, sum);
}

Tree *solve(Tree *root)
{
    int sum = 0;
    solveR(root, &sum);
    return root;
}
