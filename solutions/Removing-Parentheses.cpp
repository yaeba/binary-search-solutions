int solve(string s)
{
    int open = 0;
    int res = 0;

    for (char c : s)
    {
        if (c == '(')
            open++;
        else if (open)
            open--;
        else
            res++;
    }

    return res + open;
}
