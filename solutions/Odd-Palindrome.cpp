bool solve(string s)
{
    // return false as soon as we find an even length palindrome
    // even length palindrome has 2 same chars at the middle
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            return false;
    }
    return true;
}
