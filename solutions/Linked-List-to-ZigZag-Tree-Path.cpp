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
Tree *solve(LLNode *node)
{
    if (!node)
        return nullptr;
    else if (!(node->next))
        return new Tree(node->val, nullptr, nullptr);
    else if (node->next->val < node->val)
        return new Tree(node->val, solve(node->next), nullptr);
    else
        return new Tree(node->val, nullptr, solve(node->next));
}
