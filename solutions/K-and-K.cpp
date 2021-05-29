int solve(vector<int> &nums)
{
    set<int> s;
    int k = -1;

    for (int n : nums)
    {
        if (n == 0 || s.find(-n) != s.end())
        {
            // found
            k = abs(n) > k ? abs(n) : k;
        }
        else
        {
            s.insert(n);
        }
    }

    return k;
}
