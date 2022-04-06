int solve(vector<vector<int>> &matrix)
{
    int nRows = matrix.size();
    if (!nRows)
        return -1;

    for (int c = 0; c < matrix[0].size(); c++)
    {
        int r = 0;
        for (; r < nRows; r++)
        {
            if (!binary_search(matrix[r].begin(), matrix[r].end(), matrix[0][c]))
                break;
        }
        if (r == nRows)
            return matrix[0][c];
    }
    return -1;
}
