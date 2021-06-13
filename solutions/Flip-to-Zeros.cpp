int solve(vector<int> &nums)
{
    int res = 0, flipped = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] ^ flipped)
        {
            // it is 1
            res++;
            flipped = 1 - flipped;
        }
    }

    return res;
}
