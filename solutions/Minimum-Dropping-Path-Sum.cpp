int solve(vector<vector<int>> &matrix)
{
    int nRows = matrix.size();
    int nCols = matrix[0].size();

    for (int r = 1; r < nRows; r++)
    {
        int prevMin = INT_MAX, prevSecondMin = INT_MAX;

        // find min and secondMin of previous row
        for (int c = 0; c < nCols; c++)
        {
            if (matrix[r - 1][c] < prevMin)
            {
                prevSecondMin = prevMin;
                prevMin = matrix[r - 1][c];
            }
            else if (matrix[r - 1][c] < prevSecondMin)
            {
                prevSecondMin = matrix[r - 1][c];
            }
        }

        // at current row, add either `prevMin` or `prevSecondMin`
        for (int c = 0; c < nCols; c++)
        {
            if (matrix[r - 1][c] == prevMin)
                matrix[r][c] += prevSecondMin;
            else
                matrix[r][c] += prevMin;
        }
    }

    return *min_element(matrix[nRows - 1].begin(), matrix[nRows - 1].end());
}
