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
    if (!root)
        return 0;

    queue<Tree *> q;
    q.push(root);
    int res;

    while (!q.empty())
    {
        int levelSize = q.size();
        res = 0;
        while (levelSize--)
        {
            Tree *node = q.front();
            q.pop();
            res += node->val;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }

    return res;
}
