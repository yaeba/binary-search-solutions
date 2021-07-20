bool solve(string s)
{
    // left to R
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
            return true;
        else if (s[i] == 'B')
            break;
    }

    // right to R
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'R')
            return true;
        else if (s[i] == 'B')
            return false;
    }

    return false;
}
