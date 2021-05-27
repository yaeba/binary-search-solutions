class RunLengthDecodedIterator
{
private:
    queue<pair<char, int>> _charLength;

public:
    RunLengthDecodedIterator(string s)
    {
        stringstream ss(s);

        char c;
        int l;
        while (ss >> l && ss >> c)
            _charLength.push({c, l});
    }

    string next()
    {
        pair<char, int> &p = _charLength.front();
        p.second--;
        if (p.second == 0)
            _charLength.pop();
        return string(1, p.first);
    }

    bool hasnext()
    {
        return !_charLength.empty();
    }
};
