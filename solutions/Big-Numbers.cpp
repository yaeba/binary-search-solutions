int solve(vector<vector<int>> &matrix)
{
    if (matrix.empty())
        return 0;
    else
    {
        vector<int> rowMax, colMax;

        // determine rowMax
        for (int i = 0; i < matrix.size(); i++)
        {
            int m = INT_MIN;
            for (int ele : matrix[i])
            {
                m = max(m, ele);
            }
            rowMax.push_back(m);
        }

        // determine colMax
        for (int i = 0; i < matrix[0].size(); i++)
        {
            int m = INT_MIN;
            for (int r = 0; r < matrix.size(); r++)
            {
                m = max(m, matrix[r][i]);
            }
            colMax.push_back(m);
        }

        int res = 0;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                int ele = matrix[i][j];
                if (ele == rowMax[i] && ele == colMax[j])
                    res++;
            }
        }

        return res;
    }
}
