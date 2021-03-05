bool solve(int n)
{
    if (n == 0)
        return false;
    else
    {
        int goodPrimeFactors[] = {2, 3, 5};

        for (int i : goodPrimeFactors)
        {
            while (n % i == 0)
                n /= i;
        }

        return n == 1;
    }
}
