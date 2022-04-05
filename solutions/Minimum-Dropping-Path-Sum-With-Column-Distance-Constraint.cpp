int solve(vector<vector<int>> &matrix)
{
    int nRows = matrix.size();
    int nCols = matrix[0].size();
    for (int r = 1; r < nRows; r++)
    {
        for (int c = 0; c < nCols; c++)
        {
            matrix[r][c] +=
                min({c == 0 ? INT_MAX : matrix[r - 1][c - 1],
                     c == nCols - 1 ? INT_MAX : matrix[r - 1][c + 1],
                     matrix[r - 1][c]
                });
        }
    }
    return *min_element(matrix[nRows - 1].begin(), matrix[nRows - 1].end());
}
