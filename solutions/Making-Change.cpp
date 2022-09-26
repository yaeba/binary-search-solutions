int solve(int n)
{
    int res = 0;
    int coins[] = {25, 10, 5, 1};
    for (int coin : coins)
    {
        res += n / coin;
        n %= coin;
        if (!n)
            return res;
    }
    return res;
}
