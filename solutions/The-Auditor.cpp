int solve(string s)
{
    int res = 0;
    for (char c : s)
        res = 26 * res + (c - 'A' + 1);
    return res;
}
