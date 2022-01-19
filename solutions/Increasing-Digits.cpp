int choose(int n, int k)
{
    if (k == 0)
        return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

int solve(int n)
{
    return n > 9 ? 0 : choose(9, n);
}
