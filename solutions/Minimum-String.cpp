int solve(string s, string t)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
        arr[t[i] - 'a']--;
    }

    int res = 0;

    for (int n : arr)
    {
        res += abs(n);
    }

    return res / 2;
}
