string solve(string a, string b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    ostringstream o;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        carry = 0;

        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        if (sum >= 10)
        {
            sum %= 10;
            carry = 1;
        }
        o << std::to_string(sum);
    }

    string res = o.str();
    std::reverse(res.begin(), res.end());

    return res;
}
