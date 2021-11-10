/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode *solve(Tree *root)
{
    if (!root)
        return nullptr;

    queue<Tree *> q;
    q.push(root);
    LLNode *dummy = new LLNode(0);
    LLNode *curr = dummy;

    while (!q.empty())
    {
        Tree *node = q.front();
        q.pop();
        curr->next = new LLNode(node->val);
        curr = curr->next;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return dummy->next;
}
