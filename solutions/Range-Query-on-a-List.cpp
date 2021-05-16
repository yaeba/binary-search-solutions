class RangeSum
{
private:
    vector<int> _prefixSums;

public:
    RangeSum(vector<int> &nums)
    {
        // nums      : [   1, 2, 3,  4]
        // prefixSums: [0, 1, 3, 6, 10]
        int running = 0;
        _prefixSums.push_back(running);

        for (int n : nums)
        {
            running += n;
            _prefixSums.push_back(running);
        }
    }

    int total(int i, int j)
    {
        int lower = i < 0 ? 0 : i;
        int upper = j >= _prefixSums.size() ? _prefixSums.size() - 1 : j;

        // total(0, 3) = nums[0] + nums[1] + nums[2] = prefixSums[3] - prefixSums[0]
        return _prefixSums[upper] - _prefixSums[lower];
    }
};
