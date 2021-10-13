int solve(string s, string t)
{
    int lenS = s.length();
    int lenT = t.length();
    int res = lenT;

    for (int i = 0; i < lenS - lenT + 1; i++)
    {
        int edits = 0;
        for (int j = 0; j < lenT; j++)
        {
            edits += s[i + j] != t[j];
        }
        res = std::min(res, edits);
    }
    return res;
}
