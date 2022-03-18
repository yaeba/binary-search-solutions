/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void solveR(Tree *node, int len, int sum, int *longest_len, int *longest_sum)
{
    if (node)
    {
        solveR(node->left, len + 1, sum + node->val, longest_len, longest_sum);
        solveR(node->right, len + 1, sum + node->val, longest_len, longest_sum);
    }
    else if (len > *longest_len)
    {
        *longest_len = len;
        *longest_sum = sum;
    }
    else if (len == *longest_len && sum > *longest_sum)
    {
        *longest_sum = sum;
    }
}

int solve(Tree *root)
{
    int longest_len = 0, longest_sum = 0;
    solveR(root, 0, 0, &longest_len, &longest_sum);
    return longest_sum;
}
