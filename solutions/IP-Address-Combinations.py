class Solution:
    def solve(self, ip):
        def valid(s):
            try:
                return str(int(s)) == s and 0 <= int(s) <= 255
            except:
                return False

        res = []
        l = len(ip)
        for i in range(1, l):
            for j in range(i + 1, l):
                for k in range(j + 1, l):
                    a, b, c, d = ip[:i], ip[i:j], ip[j:k], ip[k:]
                    if valid(a) and valid(b) and valid(c) and valid(d):
                        res.append(".".join([a, b, c, d]))

        return res
