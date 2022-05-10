class Solution:
    def solve(self, pushes, pops):
        stack = []
        pops = pops[::-1]
        for x in pushes:
            stack.append(x)
            while stack and pops and stack[-1] == pops[-1]:
                stack.pop()
                pops.pop()

        return not stack
