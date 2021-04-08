bool solve(int n)
{
    int nDigits = to_string(n).length();
    int running = 0;
    int oriN = n;

    while (n > 0)
    {
        running += pow(n % 10, nDigits);
        n /= 10;
    }

    return running == oriN;
}
