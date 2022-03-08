import java.util.*;

/**
 * class LLNode {
 *   int val;
 *   LLNode next;
 * }
 */
class Solution {
    public LLNode solve(LLNode node) {
        for (LLNode curr = node; curr != null && curr.next != null; curr = curr.next.next) {
            int tmp = curr.val;
            curr.val = curr.next.val;
            curr.next.val = tmp;
        }
        return node;
    }
}
