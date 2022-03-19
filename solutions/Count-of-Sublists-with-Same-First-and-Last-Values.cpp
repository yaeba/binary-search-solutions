int solve(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int res = 0;

    for (int n : nums)
    {
        freq[n]++;
        res += freq[n];
    }

    return res;
}
