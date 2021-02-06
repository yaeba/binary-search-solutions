int solve(string s)
{
    // smarter way
    int res = 0;

    for (char c : s)
        res = res * 3 + (c - '0');

    return res;
}
