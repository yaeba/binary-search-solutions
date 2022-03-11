int solve(string s)
{
    int res = 0;
    int open = 0;
    for (char c : s)
    {
        if (c == '(')
            open++;
        else if (c == ')' && open)
        {
            open--;
            res += 2;
        }
    }
    return res;
}
