class Solution:
    def solve(self, contacts):
        seen = set()
        res = 0
        for emails in contacts:
            emails = set(emails)
            res += 0 if seen & emails else 1
            seen |= emails
        return res
