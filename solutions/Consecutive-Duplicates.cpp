string solve(string s)
{
    if (s.empty())
        return "";
    else
    {
        ostringstream outputStream;

        char prev = s[0];
        outputStream << prev;
        for (int i = 1; i < s.size(); i++)
        {
            char now = s[i];
            if (now == prev)
                continue;
            else
            {
                outputStream << now;
                prev = now;
            }
        }
        return outputStream.str();
    }
}
