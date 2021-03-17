int solve(vector<int> &a, vector<int> &b)
{
    int sizeA = a.size();
    int sizeB = b.size();

    if (sizeA == 0 || sizeB == 0)
    {
        return sizeA == 0 && sizeB == 0 ? 0 : -1;
    }
    else
    {
        int sumA = accumulate(a.begin(), a.end(), 0);
        int sumB = accumulate(b.begin(), b.end(), 0);
        int sumDiff = abs(sumA - sumB);
        if (sumDiff == 0)
            return 0;
        else
        {
            vector<int> larger = sumA > sumB ? a : b;
            vector<int> smaller = sumA < sumB ? a : b;
            map<int, int> diffFreq;

            // we want to increase the smaller one and decrease the large one
            for (int l : larger)
            {
                diffFreq[l - 1]++;
            }
            for (int s : smaller)
            {
                diffFreq[6 - s]++;
            }
            int numberOfEdits = 0;

            for (auto i = diffFreq.rbegin(); i != diffFreq.rend() && sumDiff > 0; i++)
            {
                for (int j = 0; j < i->second && sumDiff > 0; j++)
                {
                    sumDiff -= i->first;
                    numberOfEdits++;
                }
            }

            return sumDiff <= 0 ? numberOfEdits : -1;
        }
    }
}
