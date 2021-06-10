int solve(int n)
{
    int res = 0;

    while (n)
    {
        int digit = n % 10;
        res += digit;
        if (res >= 10)
            res = res % 10 + 1;
        n /= 10;
    }

    return res;

    // another solution
    // property of digitsum(n)
    // - 0 if n is 0
    // - 1 + (n - 1) mod 9 otherwise
    // return n ? 1 + (n - 1) % 9 : 0;
}
