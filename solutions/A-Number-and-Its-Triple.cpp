bool solve(vector<int> &nums)
{
    unordered_set<int> s;

    for (int n : nums)
    {
        if (s.find(n * 3) != s.end())
        {
            return true;
        }
        else if (n % 3 == 0 && s.find(n / 3) != s.end())
        {
            return true;
        }
        else
        {
            s.insert(n);
        }
    }

    return false;
}
