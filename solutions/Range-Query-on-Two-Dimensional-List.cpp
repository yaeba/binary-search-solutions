class RangeSumMatrix
{
private:
    vector<vector<int>> pref;

public:
    RangeSumMatrix(vector<vector<int>> &matrix)
    {
        // calculate 2d prefix sum from matrix (starting from top left)
        int nRows = matrix.size();
        int nCols = matrix[0].size();
        pref = vector<vector<int>>(nRows + 1, vector<int>(nCols + 1));
        for (int r = 1; r < nRows + 1; r++)
            for (int c = 1; c < nCols + 1; c++)
                pref[r][c] =
                    matrix[r - 1][c - 1] + pref[r - 1][c] + pref[r][c - 1] - pref[r - 1][c - 1];
    }

    int total(int row0, int col0, int row1, int col1)
    {
        return pref[row1 + 1][col1 + 1] - pref[row0][col1 + 1] - pref[row1 + 1][col0] +
               pref[row0][col0];
    }
};
