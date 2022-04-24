int nLessThanOrEqualTo(int target, vector<vector<int>> &matrix)
{
    int res = 0;
    for (auto row : matrix)
        res += std::upper_bound(row.begin(), row.end(), target) - row.begin();
    return res;
}

int solve(vector<vector<int>> &matrix, int k)
{
    int lo = matrix[0][0];
    int hi = matrix.back().back();

    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        // find how many elements in matrix that's <= `mid`
        // if this number is > k, search left
        // otherwise search right
        if (nLessThanOrEqualTo(mid, matrix) > k)
            hi = mid;
        else
            lo = mid + 1;
    }
    return lo;
}
