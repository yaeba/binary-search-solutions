int solve(string a, string b)
{
    // assuming only lowercase alphabets
    int va[26] = {0};
    int vb[26] = {0};

    for (char c : a)
        va[(int)(c - 'a')]++;
    for (char c : b)
        vb[(int)(c - 'a')]++;

    int res = 0;

    for (int i = 0; i < 26; i++)
        res += min(va[i], vb[i]);

    return res;
}
