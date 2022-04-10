int solve(string s)
{
    // treat this problem as finding longest common subsequence
    // of this string and the reverse of itself
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
    return table[len][len];
}
