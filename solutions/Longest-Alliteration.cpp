int solve(vector<string> &words)
{
    if (words.empty())
        return 0;

    char prev = words[0][0];
    int longest = 1;
    int consec = 1;

    for (int i = 1; i < words.size(); i++)
    {
        char curr = words[i][0];

        if (prev == curr)
        {
            consec++;
        }
        else
        {
            prev = curr;
            consec = 1;
        }
        longest = max(longest, consec);
    }

    return longest;
}
