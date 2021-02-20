bool solve(vector<int> &nums)
{
    // check
    // a) nums[i]   ^ nums[i+1]   ^ ... == 0
    // b) nums[i]+1 ^ nums[i+1]+1 ^ ... == 0
    int a = 0, b = 0;

    for (int i : nums)
    {
        a ^= i;
        b ^= i + 1;
    }
    return a == 0 && b == 0;
}
