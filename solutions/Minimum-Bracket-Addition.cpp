int solve(string s)
{
    int extraOpen = 0;
    int extraClose = 0;

    for (char c : s)
    {
        if (c == '(')
            extraOpen++;
        else
        {
            // ')'
            if (extraOpen == 0)
                extraClose++;
            else
                extraOpen--;
        }
    }

    return extraOpen + extraClose;
}
