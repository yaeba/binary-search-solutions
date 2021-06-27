vector<int> solve(string s, string c)
{
    // 1. find shortest dist to left
    // eg    [-, -, x, -, -, x, -]
    // dist: [?, ?, 0, 1, 2, 0, 1]
    // 2. find shortest dist to right
    // dist: [?, ?, 0, 1, 2, 0, 1]
    // ==>:  [2, 1, 0, 1, 1, 0, 1]

    int size = s.length();
    char target = c[0];
    vector<int> res(size);

    int dist = INT_MAX;

    // scan left to right
    for (int i = 0; i < size; i++)
    {
        if (s[i] == target)
            dist = 0;
        else
            dist = max(dist + 1, dist);
        res[i] = dist;
    }

    // scan right to left
    for (int i = size - 1; i > 0; i--)
    {
        if (res[i - 1] > res[i])
            res[i - 1] = res[i] + 1;
    }

    return res;
}
