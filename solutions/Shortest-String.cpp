int solve(string s)
{
    // result is always extra 1s or 0s that couldn't be
    // paired up with an opposite symbol
    // eg 11000 => 0
    //    10100 => 0
    // thus, result length is always the number of unpaired digits
    int n = s.length();
    int count = 0;

    for (char c : s)
    {
        if (c == '0')
            count++;
    }

    return abs((n - count) - count);
}
