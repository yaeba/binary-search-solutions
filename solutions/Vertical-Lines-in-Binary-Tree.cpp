class MinMax
{
public:
    int left = 0;
    int right = 0;
};

void solveRecursive(Tree *root, MinMax *minMax, int pos)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Tree *left = root->left;
        Tree *right = root->right;

        if (left != NULL)
        {
            solveRecursive(left, minMax, pos - 1);
        }
        else
        {
            minMax->left = min(minMax->left, pos);
        }
        if (right != NULL)
        {
            solveRecursive(right, minMax, pos + 1);
        }
        else
        {
            minMax->right = max(minMax->right, pos);
        }
    }
}

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
    MinMax minMax;
    solveRecursive(root, &minMax, 0);
    // cout << minMax.left << " " << minMax.right << endl;
    return minMax.right - minMax.left + 1;
}
