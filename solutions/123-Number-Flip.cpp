int solve(int n)
{
    string s = std::to_string(n);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - '0' < 3)
        {
            s[i] = '3';
            break;
        }
    }

    return std::stoi(s);
}
