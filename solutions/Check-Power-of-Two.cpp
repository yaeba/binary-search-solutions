bool solve(int n)
{
    // take bitwise AND of n and (n-1)
    // excluding n = 0, the only times when n & (n-1) == 0
    // are when n = 2^x for some positive integer x
    // eg n = 4, 4 & 3 = 100 & 011 = 000 (0)
    // eg n = 5, 5 & 4 = 101 & 100 = 100 (not 0)

    if (n <= 0)
        return false;

    return (n & (n - 1)) == 0;
}
