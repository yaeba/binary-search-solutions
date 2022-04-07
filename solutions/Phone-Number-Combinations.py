class Solution:
    def solve(self, digits):
        mapping = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz",
        }

        res = []

        def solveR(digits, acc):
            if not digits:
                return res.append(acc)
            for char in mapping[digits[0]]:
                solveR(digits[1:], acc + char)

        solveR(digits, "")
        return res
