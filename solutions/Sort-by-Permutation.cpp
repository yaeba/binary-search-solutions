vector<string> solve(vector<string> &lst, vector<int> &p)
{
    for (int i = 0; i < p.size(); i++)
    {
        while (i != p[i])
        {
            // continue swapping in a cycle
            swap(lst[i], lst[p[i]]);
            swap(p[i], p[p[i]]);
        }
    }

    return lst;
}
