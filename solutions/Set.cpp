class CustomSet
{
private:
    vector<int> sortedVector;

public:
    CustomSet()
    {
    }

    void add(int val)
    {
        sortedVector.insert(
            upper_bound(sortedVector.begin(), sortedVector.end(), val),
            val);
    }

    bool exists(int val)
    {
        auto lower = lower_bound(sortedVector.begin(), sortedVector.end(), val);
        return lower != sortedVector.end() && *lower == val;
    }

    void remove(int val)
    {
        auto pr = equal_range(sortedVector.begin(), sortedVector.end(), val);
        sortedVector.erase(pr.first, pr.second);
    }
};
