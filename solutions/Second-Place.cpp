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
    int res = 0, deepest = 0;
    if (!root)
        return res;

    queue<Tree *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        int levelSize = q.size();
        int hasLeaf = false;
        while (levelSize--)
        {
            Tree *node = q.front();
            q.pop();
            if (!(node->left) && !(node->right))
                hasLeaf = true;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        if (hasLeaf)
        {
            res = deepest;
            deepest = level;
        }
        level++;
    }
    return res;
}
