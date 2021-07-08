string solve(vector<string> &words)
{
    if (words.empty())
        return "";

    ostringstream res;

    int i = 0;
    while (true)
    {
        for (string word : words)
        {
            if (i >= word.size() || word[i] != words[0][i])
            {
                return res.str();
            }
        }
        res << words[0][i];
        i++;
    }

    return res.str();
}
