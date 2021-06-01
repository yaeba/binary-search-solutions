package solutions;

import java.util.*;

class Solution {
    public int solve(String[] ops) {
        Stack<Integer> s = new Stack<Integer>();

        for (String op : ops) {
            try {
                if (op.equals("POP"))
                    s.pop();
                else if (op.equals("DUP"))
                    s.push(s.peek());
                else if (op.equals("+"))
                    s.push(s.pop() + s.pop());
                else if (op.equals("-"))
                    s.push(s.pop() - s.pop());
                else {
                    int i = Integer.parseInt(op);
                    if (i >= 0)
                        s.push(i);
                    else
                        throw new Exception("");
                }
            } catch (Exception e) {
                return -1;
            }
        }

        return s.peek();
    }
}
