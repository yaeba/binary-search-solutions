int solve(vector<int> &nums)
{
    // int n = nums.size();

    // int sum = accumulate(nums.begin(), nums.end(), 0);
    // int sumFromOneToN = n * (n - 1) / 2;

    // return sum - sumFromOneToN;

    // using XOR
    int res = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        res = res ^ nums[i] ^ (i + 1);
    }

    return res;
}
