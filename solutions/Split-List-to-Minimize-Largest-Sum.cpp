bool sumWillNotExceed(int limit, vector<int> &nums, int nSublists)
{
    int sum = 0, count = 1;
    for (int num : nums)
    {
        if (sum + num > limit)
        {
            // dont add, cut and add to new sublist instead
            count++;
            sum = num;
        }
        else
        {
            // safe to add to curr sublist
            sum += num;
        }
    }
    if (count <= nSublists)
        return true;
    return false;
}

int solve(vector<int> &nums, int k)
{
    // ans will be in range of [max(nums), sum(nums)]
    // use binary search in this range to find ans
    // lo = max(nums), hi = sum(nums)
    int lo = *max_element(nums.begin(), nums.end());
    int hi = accumulate(nums.begin(), nums.end(), 0);
    int res = INT_MAX;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (sumWillNotExceed(mid, nums, k))
        {
            res = min(mid, res);
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    return res;
}
