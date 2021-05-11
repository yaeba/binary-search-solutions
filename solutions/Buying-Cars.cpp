int solve(vector<int> &prices, int k)
{
    sort(prices.begin(), prices.end());

    int res = 0;
    for (int i = 0; i < prices.size() && k > 0; i++)
    {
        if (prices[i] > k)
            break;
        else
        {
            k -= prices[i];
            res++;
        }
    }
    return res;
}
