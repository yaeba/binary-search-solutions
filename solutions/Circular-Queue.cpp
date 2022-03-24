class CircularQueue
{
private:
    int *_array;
    int _curr_size, _size, _left, _right;

public:
    CircularQueue(int capacity)
    {
        _array = new int[capacity];
        _size = capacity;
        _curr_size = 0;
        _left = 0;
        _right = -1;
    }

    bool enqueue(int val)
    {
        if (isFull())
            return false;
        _right = (_right + 1) % _size;
        _array[_right] = val;
        _curr_size++;
        return true;
    }

    bool dequeue()
    {
        if (isEmpty())
            return false;
        _left = (_left + 1) % _size;
        _curr_size--;
        return true;
    }

    int front()
    {
        return isEmpty() ? -1 : _array[_left];
    }

    int top()
    {
        return isEmpty() ? -1 : _array[_right];
    }

    bool isFull()
    {
        return _curr_size == _size;
    }

    bool isEmpty()
    {
        return _curr_size == 0;
    }
};
