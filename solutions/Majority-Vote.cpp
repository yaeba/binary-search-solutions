int solve(vector<int> &nums)
{
    // to solve in O(1) space, use the Boyer-Moore majority vote alg
    int counter = 0, candidate = -1;
    for (int n : nums)
    {
        if (counter == 0)
            candidate = n;
        if (n == candidate)
            counter++;
        else
            counter--;
    }

    // count freq of this candidate to determine if it's really the majority element
    int c = 0;
    for (int n : nums)
    {
        if (n == candidate)
            c++;
    }
    return c > nums.size() / 2 ? candidate : -1;
}
