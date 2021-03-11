int solve(vector<vector<int>> &reviews, int threshold)
{
    int fiveStar = 0, total = 0;
    double thresProp = threshold * 1.0 / 100;

    for (vector<int> review : reviews)
    {
        fiveStar += review[0];
        total += review[1];
    }

    //  k = (thres * b - a) / (1 - thres)
    double k = (thresProp * total - fiveStar) / (1 - thresProp);
    int roundedK = round(k);
    int res = 100 * (fiveStar + roundedK) / (total + roundedK) >= threshold ? roundedK : roundedK + 1;
    return max(0, res);
}
