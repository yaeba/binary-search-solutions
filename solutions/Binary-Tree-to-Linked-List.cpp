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
    if (root == NULL)
        return NULL;

    LLNode *node = new LLNode(-1);
    node->val = root->val;
    node->next = solve(root->right);
    if (root->left)
    {
        LLNode *left = solve(root->left);
        LLNode *head = left;
        while (left->next)
            left = left->next;
        left->next = node;
        return head;
    }
    else
    {
        return node;
    }
}
