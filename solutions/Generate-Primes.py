class Solution:
    def solve(self, n):
        ## Sieve of Eratosthenes

        if n <= 1:
            return []

        sieve = [True] * (n + 1)  ## including n
        sieve[0] = sieve[1] = False  ## 0 and 1 are not prime

        res = []

        for (x, is_prime) in enumerate(sieve):
            if is_prime:
                ## add this number to prime list
                res.append(x)

                ## sieve out any multiples of this number
                ## note the algorithmic optimisation here of starting from x*x
                ## instead of x or 2*x because lower multiples of x were already filtered out
                ## eg x = 3, start from 9 because 6 already filtered out when x = 2 (2*3)
                ## eg x = 4, start from 16 because 8 and 12 already filtered out when x = 2 and 3
                for y in range(x * x, n + 1, x):
                    sieve[y] = False

        return res
