int solve(vector<vector<int>> &matrix)
{
    int i, j;
    for (i = 0; i < matrix.size(); i++)
    {
        for (j = 0; j < matrix[i].size(); j++)
        {
            int up = i == 0 ? 0 : matrix[i - 1][j];
            int left = j == 0 ? 0 : matrix[i][j - 1];
            matrix[i][j] = max(up, left) + matrix[i][j];
        }
    }

    return matrix[i - 1][j - 1];
}
