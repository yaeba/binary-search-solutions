bool solve(int num)
{
    stack<int> s;
    int nDigits = trunc(log10(num)) + 1;
    double median = (nDigits + 1.0) / 2;

    for (int n = 1; n <= nDigits; n++)
    {
        int i = num % 10;
        if (n < median)
        {
            s.push(i);
        }
        else if (n > median)
        {
            // start popping
            if (i != s.top())
                return false;
            s.pop();
        }
        num /= 10;
    }

    return true;
}
