bool solve(vector<int> &nums)
{
    int size = nums.size();
    int a = 0, b = 0;
    for (int i = 0; i < size; i++)
    {
        int diff = nums[(i + 1) % size] - nums[i];
        if (diff != 1)
            a++;
        if (diff != -1)
            b++;
    }

    return size == 1 || a == 1 || b == 1;
}
