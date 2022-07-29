int palindromeFromMid(string s, int left, int right)
{
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        count++;
        left--;
        right++;
    }

    return count;
}

int solve(string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        res += palindromeFromMid(s, i, i);     // check odd palindromes
        res += palindromeFromMid(s, i, i + 1); // check even palindromes
    }

    return res;
}
