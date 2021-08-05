vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    for (int r = 0; r < matrix.size(); r++)
    {
        for (int c = 0; c < matrix[r].size(); c++)
        {
            int s = 0;
            if (r)
                s += matrix[r - 1][c];
            if (c)
                s += matrix[r][c - 1];
            if (r && c)
                s -= matrix[r - 1][c - 1];
            matrix[r][c] += s;
        }
    }

    return matrix;
}
