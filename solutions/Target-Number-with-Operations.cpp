int solve(int start, int end)
{
    int count = 0;
    while (start < end)
    {
        if (start == end)
            break;

        if (end % 2 == 1)
        {
            end--;
            count++;
        }
        else if (end / 2 < start)
        {
            // cannot divide by 2 anymore
            count += end - start;
            break;
        }
        else
        {
            end /= 2;
            count++;
        }
    }
    return count;
}
