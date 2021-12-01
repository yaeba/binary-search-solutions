/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class BSTIterator
{
private:
    queue<int> q;

    void inorder(Tree *node)
    {
        if (node)
        {
            inorder(node->left);
            q.push(node->val);
            inorder(node->right);
        }
    }

public:
    BSTIterator(Tree *root)
    {
        inorder(root);
    }

    int next()
    {
        int res = q.front();
        q.pop();
        return res;
    }

    bool hasnext()
    {
        return !q.empty();
    }
}
