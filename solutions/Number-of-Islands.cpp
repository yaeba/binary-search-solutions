void setIslandToZero(vector<vector<int>> &matrix, int i, int j)
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
        setIslandToZero(matrix, i - 1, j);
        setIslandToZero(matrix, i + 1, j);
        setIslandToZero(matrix, i, j - 1);
        setIslandToZero(matrix, i, j + 1);
    }
}

int solve(vector<vector<int>> &matrix)
{
    int res = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j])
            {
                res++;
                setIslandToZero(matrix, i, j);
            }
        }
    }

    return res;
}
