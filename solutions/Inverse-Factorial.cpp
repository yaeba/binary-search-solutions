int solve(int a)
{
    if (a <= 0)
        return -1;

    int divisor = 1;

    while (a > 1 && a % divisor == 0)
    {
        a /= divisor;
        divisor++;
    }

    return a == 1 ? divisor - 1 : -1;
}
