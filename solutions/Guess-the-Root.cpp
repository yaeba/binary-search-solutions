int solve(int n)
{

    if (n <= 1)
        return n;

    float guess = n / 2;
    long prev = 0;

    while (true)
    {
        guess = 0.5 * (guess + n / guess);
        if (floor(guess) == prev)
        {
            break;
        }
        else
        {
            prev = floor(guess);
        }
    }

    long a = (prev - 1) * (prev - 1);
    long b = prev * prev;
    long c = (prev + 1) * (prev + 1);

    if (a <= n && b > n)
        return prev - 1;
    else if (b <= n && c > n)
        return prev;
    else
        return prev + 1;
}
