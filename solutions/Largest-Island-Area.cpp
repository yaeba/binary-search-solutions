int dfs(vector<vector<int>> &matrix, int i, int j)
{
    if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[i].size())
    {
        // out of bound
        return 0;
    }
    else if (matrix[i][j] == 0)
    {
        // not land
        return 0;
    }
    else
    {
        // expand
        matrix[i][j] = 0;
        return 1 + dfs(matrix, i - 1, j) + dfs(matrix, i + 1, j) + dfs(matrix, i, j - 1) +
               dfs(matrix, i, j + 1);
    }
}
int solve(vector<vector<int>> &matrix)
{
    int res = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            res = max(res, dfs(matrix, i, j));
        }
    }

    return res;
}
