int solve(string a, string b, string c)
{
    // extension of LCS of two strings
    int lenA = a.length();
    int lenB = b.length();
    int lenC = c.length();

    vector<vector<vector<int>>> table(lenA + 1,
                                      vector<vector<int>>(lenB + 1, vector<int>(lenC + 1, 0)));

    for (int i = 1; i <= lenA; i++)
    {
        for (int j = 1; j <= lenB; j++)
        {
            for (int k = 1; k <= lenC; k++)
            {
                if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
                {
                    table[i][j][k] = table[i - 1][j - 1][k - 1] + 1;
                }
                else
                {
                    table[i][j][k] =
                        std::max({table[i - 1][j][k], table[i][j - 1][k], table[i][j][k - 1]});
                }
            }
        }
    }
    return table[lenA][lenB][lenC];
}
