vector<int> solve(vector<vector<int>> &matrix)
{
    vector<int> res;
    if (!matrix.size())
        return res;

    int top, bot, left, right;
    top = left = 0;
    bot = matrix.size() - 1;
    right = matrix[0].size() - 1;

    int k = 0;
    while (top <= bot && left <= right)
    {
        // move left
        for (int col = left; col <= right; col++)
            res.push_back(matrix[top][col]);
        top++;

        // move down
        for (int row = top; row <= bot; row++)
            res.push_back(matrix[row][right]);
        right--;

        if (top > bot || left > right)
            // do not need to loop back
            break;

        // move left
        for (int col = right; col >= left; col--)
            res.push_back(matrix[bot][col]);
        bot--;

        // move up
        for (int row = bot; row >= top; row--)
            res.push_back(matrix[row][left]);
        left++;
    }

    return res;
}
