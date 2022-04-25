bool solve(vector<vector<int>> &matrix, int target)
{
    // starting from top right corner
    // if element > target, go left
    // else if element < target, go down
    int r = 0, c = matrix[0].size() - 1;
    while (r < matrix.size() && c >= 0)
    {
        if (matrix[r][c] == target)
            return true;
        else if (matrix[r][c] > target)
            c--;
        else
            r++;
    }
    return false;
}
