int solve(int n)
{
    int res = n;

    while (n >= 3)
    {
        int full = n / 3;
        res += full;
        n = n % 3 + full;
    }

    return res;
}
