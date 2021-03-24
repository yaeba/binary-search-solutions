vector<int> solve(int n)
{
    vector<int> res;

    res.push_back(1);

    for (int i = 0; i < n; i++)
    {
        int nextVal = 1.0 * res[i] * (n - i) / (i + 1);
        res.push_back(nextVal);
    }

    return res;
}
