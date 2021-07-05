int solve(vector<int> &seats)
{
    // linear scan, keep updating max seen so far
    int res = 0, start = -1;
    int n = seats.size();

    for (int i = 0; i < n; i++)
    {
        if (seats[i] == 1)
        {
            if (start == -1)
            {
                // leftmost
                res = i;
            }
            else
            {
                // middle
                res = max(res, (i - start) / 2);
            }
            start = i;
        }
    }

    // handle rightmost
    res = max(res, n - 1 - start);

    return res;
}
