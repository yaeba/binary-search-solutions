bool solve(int n)
{

    if (n <= 1)
        return true;

    // if a number is square, then all prime factors should
    // come in pair
    bool isEven = true;

    // first divide the number by 2 repeatedly
    while (n % 2 == 0)
    {
        n /= 2;
        isEven = !isEven;
    }

    if (!isEven)
        return false;

    // next divide the number by all odd numbers
    int i = 3;
    while (i <= n)
    {
        if (n % i == 0)
        {
            n /= i;
            isEven = !isEven;
        }
        else
        {
            if (!isEven)
                return false;
            i += 2;
        }

        if (n == 1)
            break;
    }

    if (!isEven)
        return false;
    return true;
}
