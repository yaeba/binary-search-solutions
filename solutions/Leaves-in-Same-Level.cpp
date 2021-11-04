/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree *root)
{
    queue<Tree *> q;
    q.push(root);
    bool seenLeaf = false;

    while (!q.empty())
    {
        if (seenLeaf)
        {
            return false;
        }
        int levelSize = q.size();
        while (levelSize--)
        {
            Tree *node = q.front();
            q.pop();
            if (!(node->left) && !(node->right))
            {
                // leaf
                seenLeaf = true;
            }
            else
            {
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }
    }
    return true;
}
