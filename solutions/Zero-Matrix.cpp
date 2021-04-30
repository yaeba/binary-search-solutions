vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    if (matrix.size() == 0 || matrix[0].size() == 0)
        return matrix;

    // determine if firstRow & firstCol should be 0
    bool firstRowZero = false, firstColZero = false;
    for (int c = 0; c < matrix[0].size(); c++)
    {
        if (matrix[0][c] == 0)
        {
            firstRowZero = true;
            break;
        }
    }
    for (int r = 0; r < matrix.size(); r++)
    {
        if (matrix[r][0] == 0)
        {
            firstColZero = true;
            break;
        }
    }

    // set matrix[0][j] and matrix[i][0] to 0 if matrix[i][j] = 0
    for (int r = 1; r < matrix.size(); r++)
    {
        for (int c = 1; c < matrix[r].size(); c++)
        {
            if (matrix[r][c] == 0)
            {
                matrix[0][c] = 0;
                matrix[r][0] = 0;
            }
        }
    }

    // replace matrix[1][1] onwards to 0
    for (int r = 1; r < matrix.size(); r++)
    {
        for (int c = 1; c < matrix[r].size(); c++)
        {
            if (matrix[0][c] == 0 || matrix[r][0] == 0)
            {
                matrix[r][c] = 0;
            }
        }
    }

    // if first row should be 0s
    for (int c = 0; c < matrix[0].size(); c++)
    {
        if (firstRowZero)
            matrix[0][c] = 0;
    }

    // if first col should be 0s
    for (int r = 0; r < matrix.size(); r++)
    {
        if (firstColZero)
            matrix[r][0] = 0;
    }

    return matrix;
}
