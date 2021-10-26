int solve(string a, string b)
{
    int lenA = a.length();
    int lenB = b.length();
    vector<vector<int>> table(lenA + 1, vector<int>(lenB + 1, 0));

    int res = 0;
    for (int i = 1; i <= lenA; i++)
    {
        for (int j = 1; j <= lenB; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                table[i][j] = table[i - 1][j - 1] + 1;
                res = std::max(table[i][j], res);
            }
            else
            {
                table[i][j] = 0;
            }
        }
    }

    return res;
}
