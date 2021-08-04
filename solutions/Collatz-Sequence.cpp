int solve(int n)
{
    int res = 1;

    while (n != 1)
    {
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
        res++;
    }
    return res;
}
