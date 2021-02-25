vector<int> solve(vector<int> &a, vector<int> &b)
{
    vector<int> res;

    int aIdx = 0, bIdx = 0;

    while (aIdx < a.size() && bIdx < b.size())
    {
        int aVal = a[aIdx];
        int bVal = b[bIdx];

        if (aVal < bVal)
        {
            res.push_back(aVal);
            aIdx++;
        }
        else
        {
            res.push_back(bVal);
            bIdx++;
        }
    }

    for (; aIdx < a.size(); aIdx++)
        res.push_back(a[aIdx]);

    for (; bIdx < b.size(); bIdx++)
        res.push_back(b[bIdx]);

    return res;
}
