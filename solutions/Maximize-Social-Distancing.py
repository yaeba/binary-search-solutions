class Solution:
    def solve(self, seats):
        ## find length of consecutive 0s = len
        ## social distance = (len + 1) // 2
        ## except at both ends, social distance = len
        ## eg    0 0 1 0 1 0 0 0 1 0
        ## dist: 2   , 1 ,   3   , 1
        lens = [len(zeros) for zeros in "".join(map(str, seats)).split("1")]
        return max(
            (l + 1) // 2 if i > 0 and i < len(lens) - 1 else l
            for (i, l) in enumerate(lens)
        )
