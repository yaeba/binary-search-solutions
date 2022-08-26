class Solution:
    def solve(self, s):
        # given "ab3(c4(de)f)g..."
        # find a, b, c, d where
        # a = "ab"
        # b = "3"
        # c = "c4(de)f"
        # d = "g..."
        # res = a + int(b) * recur(c) + recur(d)
        if "(" not in s:
            return s
        a_end = b_end = c_end = idx = 0

        # find a
        while not s[idx].isdigit():
            idx += 1
        a_end = idx

        # find b
        while not s[idx] == "(":
            idx += 1
        b_end = idx

        # find c
        idx += 1
        unclosed = 1
        while unclosed > 0:
            if s[idx] == "(":
                unclosed += 1
            elif s[idx] == ")":
                unclosed -= 1
            idx += 1
        c_end = idx

        a = s[:a_end]
        b = s[a_end:b_end]
        c = s[b_end + 1 : c_end - 1]
        d = s[c_end:]

        return a + int(b) * self.solve(c) + self.solve(d)
