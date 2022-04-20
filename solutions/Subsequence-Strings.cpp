bool solve(string s1, string s2)
{
    int a = 0;
    for (int b = 0; b < s2.length(); b++)
    {
        if (s1[a] == s2[b])
            a++;
    }
    return a == s1.length();
}
