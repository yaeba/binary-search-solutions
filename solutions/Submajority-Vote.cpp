vector<int> solve(vector<int> &nums)
{
    // similar to https://binarysearch.com/problems/Submajority-Vote
    // to solve in O(1) space, use the (extension of) Boyer-Moore majority vote alg

    // there could be up to 2 winning candidates at most
    int counter_a = 0, candidate_a = -1;
    int counter_b = 0, candidate_b = -1;
    for (int n : nums)
    {
        // set potential candidate_a or candidate_b
        if (counter_a == 0)
            candidate_a = n;
        else if (counter_b == 0)
            candidate_b = n;

        if (n == candidate_a)
            counter_a++;
        else if (n == candidate_b)
            counter_b++;
        else
        {
            counter_a--;
            counter_b--;
        }
    }

    // count freq of candidate a and b
    int freq_a = 0, freq_b = 0;
    for (int n : nums)
    {
        if (n == candidate_a)
            freq_a++;
        else if (n == candidate_b)
            freq_b++;
    }

    vector<int> res;
    if (freq_a > nums.size() / 3)
        res.push_back(candidate_a);
    if (freq_b > nums.size() / 3)
        res.push_back(candidate_b);
    sort(res.begin(), res.end());

    return res;
}
