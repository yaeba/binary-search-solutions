class ZippedIterator
{
private:
    deque<int> _q;

public:
    ZippedIterator(vector<int> &a, vector<int> &b)
    {
        int i = 0, j = 0;
        while (i < a.size() || j < b.size())
        {
            if (i < a.size())
                _q.push_back(a[i++]);
            if (j < b.size())
                _q.push_back(b[j++]);
        }
    }

    int next()
    {
        int res = _q.front();
        _q.pop_front();
        return res;
    }

    bool hasnext()
    {
        return !_q.empty();
    }
};
