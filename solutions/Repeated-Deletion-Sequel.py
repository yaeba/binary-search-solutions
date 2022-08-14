class Solution:
    def solve(self, s, k):
        stack = []
        for char in s:
            if not stack or stack[-1][0] != char:
                stack.append([char, 0])
            stack[-1][-1] += 1
            if stack[-1][-1] >= k:
                stack.pop()

        return "".join(char * freq for char, freq in stack)
