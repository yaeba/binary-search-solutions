bool solve(int n)
{
    // 3, 6, 7, 9, 10, 12, 13, 14, 15, 16, 17, 18,
    if (n == 0)
        return false;

    if (n % 3 == 0)
        return true;
    else if (n % 7 == 0)
        return true;
    else if (n == 10 || n >= 12)
        return true;
    else
        return false;
}
