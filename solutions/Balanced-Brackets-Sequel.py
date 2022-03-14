class Solution:
    def solve(self, s):
        table = {"[": "]", "(": ")", "{": "}"}
        stack = []
        for char in s:
            if char in table:
                stack.append(char)
            elif not stack or table[stack.pop()] != char:
                return False
        # stack should be empty if brackets are balanced
        return not stack
