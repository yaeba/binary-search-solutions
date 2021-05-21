string solve(int n)
{
    if (n == 0)
        return "0";

    stack<int> s;
    while (n)
    {
        int res = n % 3;
        s.push(res);
        n /= 3;
    }

    ostringstream o;
    while (!s.empty())
    {
        o << s.top();
        s.pop();
    }

    return o.str();
}
