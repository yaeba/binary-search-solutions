/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree *solve(Tree *node0, Tree *node1)
{
    if (!node0 || !node1)
    {
        // no need to merge
        return node0 ? node0 : node1;
    }
    else
    {
        // merge
        node0->val += node1->val;
        node0->left = solve(node0->left, node1->left);
        node0->right = solve(node0->right, node1->right);
        return node0;
    }
}
