int solve(vector<int> &a, vector<int> &b)
{
    assert(a.size() == b.size());
    // first find the point where arrays start to differ
    // then find out which one was shifted right
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == b[i])
            continue;
        else if (a[i + 1] == b[i])
            return a[i];
        else
            return b[i];
    }
    return 0;
}
