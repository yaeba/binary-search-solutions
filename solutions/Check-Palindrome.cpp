bool solve(string s)
{
    stack<char> st;
    int size = s.length();
    double median = (size + 1.0) / 2;

    for (int i = 0; i < size; i++)
    {
        char c = s[i];
        int pos = i + 1;

        if (pos < median)
        {
            st.push(c);
        }
        else if (pos > median)
        {
            // start popping
            if (c != st.top())
                return false;
            st.pop();
        }
    }

    return true;
}
