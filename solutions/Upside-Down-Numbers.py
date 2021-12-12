class Solution:
    def solve(self, n):
        def helper(length):
            if length < 0:
                return []
            elif length == 0:
                return [""]
            elif length == 1:
                return ["0", "1", "8"]
            sub = helper(length - 2)
            res = []
            for s in sub:
                if length < n:
                    res.append("0" + s + "0")
                res.append("1" + s + "1")
                res.append("6" + s + "9")
                res.append("8" + s + "8")
                res.append("9" + s + "6")
            return res

        return sorted(helper(n)) if n else []
