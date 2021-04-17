bool clap(int i)
{
    if (i % 3 == 0)
        return true;

    while (i)
    {
        int rem = i % 10;

        if (rem == 3 || rem == 6 || rem == 9)
            return true;

        i /= 10;
    }

    return false;
}
vector<string> solve(int n)
{
    vector<string> res;

    for (int i = 1; i <= n; i++)
    {
        if (clap(i))
            res.push_back("clap");
        else
            res.push_back(to_string(i));
    }

    return res;
}
