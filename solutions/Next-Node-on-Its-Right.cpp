/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree *solve(Tree *tree, int target)
{
    if (!tree)
        return nullptr;
    queue<Tree *> q;
    q.push(tree);

    while (!q.empty())
    {
        int levelSize = q.size();

        while (levelSize--)
        {
            Tree *node = q.front();
            q.pop();
            if (node->val == target)
            {
                return levelSize ? q.front() : nullptr;
            }
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
    }

    return nullptr;
}
