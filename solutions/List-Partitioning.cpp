vector<string> solve(vector<string> &strs)
{
    // dutch national flag problem
    int low = 0, mid = 0, high = strs.size() - 1;
    while (mid <= high)
    {
        if (strs[mid] == "green")
            mid++;
        else if (strs[mid] == "red")
            swap(strs[low++], strs[mid++]);
        else if (strs[mid] == "blue")
            swap(strs[mid], strs[high--]);
    }
    return strs;
}
