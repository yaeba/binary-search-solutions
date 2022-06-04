void setLandToZero(vector<vector<int>> &matrix, int i, int j)
{
    if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[i].size())
    {
        // out of bound
        return;
    }
    else if (matrix[i][j] == 0)
    {
        // not land
        return;
    }
    else
    {
        // expand
        matrix[i][j] = 0;
        setLandToZero(matrix, i - 1, j);
        setLandToZero(matrix, i + 1, j);
        setLandToZero(matrix, i, j - 1);
        setLandToZero(matrix, i, j + 1);
    }
}

int solve(vector<vector<int>> &matrix)
{
    // idea is to set the land cells at the boundary and their
    // neighbours to zero
    // do this at the four edges of matrix

    int nRows = matrix.size();
    int nCols = matrix[0].size();

    // top and bottom row
    for (int r : {0, nRows - 1})
        for (int c = 0; c < nCols; c++)
            setLandToZero(matrix, r, c);

    // left and right col
    for (int c : {0, nCols - 1})
        for (int r = 0; r < nRows; r++)
            setLandToZero(matrix, r, c);

    // answer is the number of remaining ones
    int res = 0;
    for (int r = 0; r < nRows; r++)
        for (int c = 0; c < nCols; c++)
            res += matrix[r][c] == 1;

    return res;
}
