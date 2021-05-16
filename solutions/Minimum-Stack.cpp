class MinimumStack
{
private:
    stack<int> _numStack;
    stack<int> _minStack;

public:
    MinimumStack()
    {
        // use 1 stack for normal numbers
        // use an extra stack for keeping track of minimum
    }

    void append(int val)
    {
        // numStack: [3, 2, 1, 1, 2, 3]
        // minStack: [3, 2, 1, 1, 1, 1]
        _numStack.push(val);
        if (_minStack.empty())
        {
            _minStack.push(val);
        }
        else
        {
            _minStack.push(std::min(_minStack.top(), val));
        }
    }

    int peek()
    {
        return _numStack.top();
    }

    int min()
    {
        return _minStack.top();
    }

    int pop()
    {
        int last = peek();
        _numStack.pop();
        _minStack.pop();
        return last;
    }
};
