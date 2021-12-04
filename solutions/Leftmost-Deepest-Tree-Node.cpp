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
    queue<Tree *> q;
    q.push(root);
    Tree *res = nullptr;
    while (!q.empty())
    {
        res = q.front();
        q.pop();
        if (res->right)
            q.push(res->right);
        if (res->left)
            q.push(res->left);
    }
    return res->val;
}
