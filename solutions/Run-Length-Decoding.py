class Solution:
    def solve(self, s):
        splitted = iter(
            ["".join(x) for (_, x) in itertools.groupby(s, key=str.isalpha)]
        )
        return "".join(
            [char * int(number) for (number, char) in zip(splitted, splitted)]
        )
