string solve(string s)
{

    ostringstream output;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int count = 1;

        while (i + 1 < s.length() && s[i + 1] == c)
        {
            i++;
            count++;
        }

        output << count << c;
    }

    return output.str();
}
