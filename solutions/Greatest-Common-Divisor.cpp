int gcd(int x, int y)
{
    // euclidean alg, GCD(X, Y) = GCD(X, X % Y)
    if (y == 0)
        return x;

    if (x == y)
        return x;
    else if (x < y)
        return gcd(x, y % x);
    else
        return gcd(y, x % y);
}

int solve(vector<int> &nums)
{
    // gcd(x1, x2, x3) = gcd(gcd(x1, x2), x3)
    int resGcd = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        resGcd = gcd(nums[i], resGcd);
    }
    return resGcd;
}
