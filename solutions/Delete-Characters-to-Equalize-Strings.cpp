int solve(string a, string b)
{
    // find LCS of a and b
    int lenA = a.length();
    int lenB = b.length();
    vector<vector<int>> table(lenA + 1, vector<int>(lenB + 1, 0));

    for (int i = 1; i <= lenA; i++)
    {
        for (int j = 1; j <= lenB; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                table[i][j] = table[i - 1][j - 1] + 1;
            }
            else
            {
                table[i][j] = std::max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }

    int lenLCS = table[lenA][lenB];

    return lenA + lenB - 2 * lenLCS;
}
