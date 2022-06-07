string setIslandToZero(vector<vector<int>> &matrix, int i, int j)
{
    if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[i].size())
        return "";
    else if (matrix[i][j] == 0)
        return "";
    else
    {
        // expand
        string res = "X";
        matrix[i][j] = 0;
        string left = setIslandToZero(matrix, i - 1, j);
        string right = setIslandToZero(matrix, i + 1, j);
        string up = setIslandToZero(matrix, i, j - 1);
        string down = setIslandToZero(matrix, i, j + 1);
        return res + "L" + left + "R" + right + "U" + up + "D" + down;
    }
}

int solve(vector<vector<int>> &matrix)
{
    unordered_set<string> seen;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j])
            {
                string island = setIslandToZero(matrix, i, j);
                seen.insert(island);
            }
        }
    }

    return seen.size();
}
