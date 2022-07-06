int solve(string s)
{
    // first find the longest palindrome subsequence of `s`
    // that is the same as finding longest common subsequence
    // of `s` and the reverse of itself
    int len = s.length();
    vector<vector<int>> table(len + 1, vector<int>(len + 1, 0));

    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len; j++)
        {
            if (s[i - 1] == s[len - j])
                table[i][j] = table[i - 1][j - 1] + 1;
            else
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
        }
    }

    // the remaining chars that are not part of the longest
    // palindrome subsequence are we insert to `s` to make it
    // palindrome
    return s.length() - table[len][len];
}
