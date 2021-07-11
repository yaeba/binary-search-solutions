class Solution:
    def solve(self, n):
        ## if n is positive, insert 5 just before digit < 5
        ## eg 923 => 9523
        ## else if n is negative, insert 5 just before digit > 5
        ## eg -239 => -2359
        is_positive = n >= 0
        str_n = str(n)

        for i in range(len(str_n)):
            if str_n[i] == "-":
                continue
            elif (is_positive and str_n[i] < "5") or (
                not is_positive and str_n[i] > "5"
            ):
                return int(str_n[:i] + "5" + str_n[i:])

        return int(str_n + "5")
