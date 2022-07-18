int solve(vector<vector<int>> &matrix)
{
    const int MOD = 1e9 + 7;
    int nRows = matrix.size();
    int nCols = matrix[0].size();

    for (int r = 0; r < nRows; r++)
    {
        for (int c = 0; c < nCols; c++)
        {
            int up = r == 0 ? 0 : matrix[r - 1][c];
            int left = c == 0 ? 0 : matrix[r][c - 1];

            if (matrix[r][c] == 1)
                matrix[r][c] = 0;
            else if (r == 0 && c == 0)
                matrix[r][c] = 1;
            else
                matrix[r][c] = (up + left) % MOD;
        }
    }

    return matrix[nRows - 1][nCols - 1];
}
