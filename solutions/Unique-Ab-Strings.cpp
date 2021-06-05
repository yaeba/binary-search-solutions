int solve(string s)
{
    int n = std::count(s.begin(), s.end(), 'a');

    return pow(2, n);
}
