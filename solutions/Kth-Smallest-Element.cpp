// Lomuto Partition
int partition(vector<int> &nums, int left, int right, int pivotIdx)
{
    int pivot = nums[pivotIdx];
    swap(nums[pivotIdx], nums[right]);
    // start from left
    pivotIdx = left;

    for (int i = left; i < right; i++)
    {
        if (nums[i] < pivot)
        {
            // put numbers < pivot to left of pivot
            swap(nums[i], nums[pivotIdx++]);
        }
    }
    // move pivot to correct place
    swap(nums[right], nums[pivotIdx]);

    return pivotIdx;
}

int solve(vector<int> &nums, int k)
{
    int left = 0, right = nums.size() - 1;

    while (true)
    {
        if (left == right)
        {
            // base case
            return nums[left];
        }
        // select pivotIdx randomly
        int pivotIdx = left + rand() % (right - left + 1);

        pivotIdx = partition(nums, left, right, pivotIdx);

        if (k == pivotIdx)
        {
            // found kth smallest
            return nums[k];
        }
        else if (k < pivotIdx)
        {
            // search left of pivot
            right = pivotIdx - 1;
        }
        else
        {
            // seach right of pivot
            left = pivotIdx + 1;
        }
    }
}
