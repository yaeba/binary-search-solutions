vector<int> solve(vector<int> &nums)
{
    vector<int> res;

    if (nums.size() <= 1)
    { // empty or only 1 element
        return res;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i];

        if (i == 0)
        { // first element
            if (curr > nums[i + 1])
                res.push_back(i);
        }
        else if (i == nums.size() - 1)
        { // last element
            if (curr > nums[i - 1])
                res.push_back(i);
        }
        else
        { // somewhere in between
            int prev = nums[i - 1];
            int next = nums[i + 1];
            if (prev < curr && curr > next)
                res.push_back(i);
        }
    }

    return res;
}
