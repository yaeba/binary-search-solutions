vector<int> solve(int n)
{
    vector<int> res;

    // first divide the number by 2 repeatedly
    while (n % 2 == 0)
    {
        res.push_back(2);
        n /= 2;
    }

    // next divide the number by all odd numbers (up to sqrt(n))
    int i = 3;
    int sqrtN = ceil(sqrt(n));
    while (i <= sqrtN)
    {

        if (n % i == 0)
        {
            res.push_back(i);
            n /= i;
        }
        else
        {
            i += 2;
        }

        if (n == 1)
            break;
    }

    // any number will only have at most one prime factor that is > sqrt(n)
    // so if we can still potentially find factor for n, it must only be itself
    // or the result of dividing it by all other smaller prime factors
    if (n > 1)
        res.push_back(n);

    return res;
}
