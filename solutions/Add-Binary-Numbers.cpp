string solve(string a, string b)
{
    string res = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        carry += i >= 0 ? a[i--] - '0' : 0;
        carry += j >= 0 ? b[j--] - '0' : 0;
        res += std::to_string(carry % 2);
        carry /= 2;
    }

    std::reverse(res.begin(), res.end());
    return res;
}
