class Solution:
    def solve(self, s):
        def eval_list(lst):
            # input list must be of length 3
            # eg [True, 'or', False]
            left, op, right = lst
            if op == "or":
                return left or right
            else:
                return left and right

        s = "(" + s + ")"
        s = s.replace("(", "( ").replace(")", " )")
        lst = []

        for idx, word in enumerate(s.split()):
            if word == ")":
                # find last occurrence of '('
                idx = len(lst) - lst[::-1].index("(") - 1
                lst, expr = lst[:idx], lst[idx + 1 :]
                lst.append(expr[0] if len(expr) == 1 else eval_list(expr))
            elif word == "true":
                lst.append(True)
            elif word == "false":
                lst.append(False)
            else:
                lst.append(word)

        return lst[0]
