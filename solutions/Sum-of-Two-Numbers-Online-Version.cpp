class TwoSum
{
public:
    TwoSum()
    {
    }
    vector<int> sortedVector;

    void add(int val)
    {
        sortedVector.insert(std::upper_bound(sortedVector.begin(), sortedVector.end(), val), val);
    }

    bool find(int val)
    {
        int start = 0, end = sortedVector.size() - 1;

        while (start < end)
        {
            int left = sortedVector[start];
            int right = sortedVector[end];

            if (left + right == val)
            {
                return true;
            }
            else if (left + right < val)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return false;
    }
};
