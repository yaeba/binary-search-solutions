int solve(int x, int y)
{
    int t = x ^ y;
    int count;

    for (count = 0; t; count++)
        t &= t - 1;

    return count;
}
