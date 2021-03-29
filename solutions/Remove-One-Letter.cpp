bool solve(string s0, string s1)
{
    if (s0.size() - s1.size() != 1)
        return false;
    else
    {
        int chanceToRemove = 1;

        int i0 = 0, i1 = 0;

        while (i0 < s0.size())
        {
            if (s0[i0] != s1[i1])
            {
                chanceToRemove--;
                i0++;
            }
            else
            {
                i0++;
                i1++;
            }
            if (chanceToRemove < 0)
                return false;
        }
        return true;
    }
}
