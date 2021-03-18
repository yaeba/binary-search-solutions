vector<string> solve(vector<string> &path)
{
    vector<string> res;

    for (string s : path)
    {
        if (s == ".")
            continue;
        else if (s == "..")
        {
            if (!res.empty())
                res.pop_back();
        }
        else
        {
            res.push_back(s);
        }
    }
    return res;
}
