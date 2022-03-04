/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree *root)
{
    int nLeft = 0, nRight = 0;
    Tree *left = root, *right = root;

    for (Tree *node = root; node; node = node->left, nLeft++)
        ;
    for (Tree *node = root; node; node = node->right, nRight++)
        ;

    if (nLeft == nRight)
    {
        return (1 << nLeft) - 1;
    }

    return 1 + solve(root->left) + solve(root->right);
}
