class Solution:
    def solve(self, start, end):
        running = 0
        while start != end:
            # get rid of last bit until start = end
            start //= 2
            end //= 2
            running += 1

        # remaining ones are result of bitwise AND of all numbers
        return start << running
