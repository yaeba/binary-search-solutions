vector<string> solve(int n)
{
    vector<string> res;

    for (int i = 1; i <= n; i++)
    {
        string s = "";
        bool isMultipleOfThree = i % 3 == 0;
        bool isMultipleOfFive = i % 5 == 0;

        if (isMultipleOfThree)
            s += "Fizz";
        if (isMultipleOfFive)
            s += "Buzz";

        res.push_back(s.empty() ? to_string(i) : s);
    }

    return res;
}
