class Solution:
    def solve(self, s):
        length = len(s)
        for i in range(length // 2):
            front_len = length - (i + 1)
            front, last = s[:front_len], s[front_len:]
            last_int = int(last)
            t = "".join(str(last_int + x) for x in range(front_len, 0, -1))
            if t[-front_len:] == front:
                return True
        return False
