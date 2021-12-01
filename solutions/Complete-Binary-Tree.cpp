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
    if (!root)
        return true;
    queue<Tree *> q;
    q.push(root);
    bool completed = false;

    while (!q.empty())
    {
        Tree *node = q.front();
        q.pop();

        if (!node)
        {
            completed = true;
        }
        else if (completed)
        {
            return false;
        }
        else
        {
            q.push(node->left);
            q.push(node->right);
        }
    }
    return true;
}
