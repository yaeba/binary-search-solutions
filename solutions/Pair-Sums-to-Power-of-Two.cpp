int nextPowerOfTwo(int v)
{
    // compute the next highest power of 2 of 32-bit v
    // https://graphics.stanford.edu/~seander/bithacks.html#RoundUpPowerOf2
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    return v + 1;
}

int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int res = 0;
    unordered_map<int, int> m;

    // assuming a + b = 2 ** c, where a <= b, then 2 ** c must be nextPowerOfTwo(b)
    // special case: if b == 0, then no next power of two
    // special case: if b % 2 == 0, then a could be 0 or b, ie 2 ** c = (b or 2 * b)

    for (int i = 0; i < nums.size(); i++)
    {
        int b = nums[i];

        if (b == 0) // special case 1
        {
            m[b]++; // increment freq of 0
            continue;
        }

        int next = nextPowerOfTwo(b);

        if (next == b) // special case 2
        {
            res += m[0]; // add in freq of 0, ie (0 + b)
            next *= 2;   // find freq of (b + b)
        }
        int a = next - b;
        // add in freq of a
        res += m[a];
        m[b]++;
    }

    return res;
}
