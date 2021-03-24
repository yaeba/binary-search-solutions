int solve(int n)
{
    int a = 1, b = 1;

    for (int i = 3; i <= n; i++)
    {
        int prev = a;
        a = b;
        b += prev;
    }

    return b;
}
