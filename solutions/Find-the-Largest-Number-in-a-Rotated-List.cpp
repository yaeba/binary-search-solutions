int solve(vector<int> &arr)
{
    int lo = 0, hi = arr.size() - 1;
    int res = INT_MIN;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        res = max(res, arr[mid]);
        if (arr[mid] >= arr[0]) // continue from mid onwards
            lo = mid + 1;
        else
            hi = mid - 1; // max is in left part
    }

    return res;
}
