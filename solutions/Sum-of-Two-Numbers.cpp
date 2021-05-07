bool solve(vector<int> &nums, int k)
{
    unordered_set<int> s;

    for (int n : nums)
    {
        int comp = k - n;

        if (s.find(comp) != s.end())
        {
            // found
            return true;
        }
        else
        {
            s.insert(n);
        }
    }

    return false;
}
