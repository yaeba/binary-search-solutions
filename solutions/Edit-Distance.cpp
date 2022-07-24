int solve(string a, string b)
{
    // standard dp
    int lenA = a.length(), lenB = b.length();
    int dp[lenA + 1][lenB + 1];

    for (int i = 0; i <= lenA; i++)
    {
        for (int j = 0; j <= lenB; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = i + j;
            else if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
        }
    }

    return dp[lenA][lenB];
}
