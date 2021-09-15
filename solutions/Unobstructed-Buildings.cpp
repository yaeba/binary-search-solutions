vector<int> solve(vector<int>& heights) {
    vector<int> res;
    int maxRight = INT_MIN;

    for (int i = heights.size() - 1; i >= 0; i--) {
        int height = heights[i];
        if (height > maxRight) {
            res.push_back(i);
            maxRight = height;
        }
    }

    std::reverse(res.begin(), res.end());
    return res;
}
