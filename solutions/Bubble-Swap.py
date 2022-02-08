class Solution:
    def solve(self, lst0, lst1):
        ## for every number in lst1
        ## do an "insertion" sort in lst0
        ## to move it to its matching idx in lst1
        res = 0
        for n in lst1:
            idx = lst0.index(n)
            res += idx
            lst0.pop(idx)
        return res
