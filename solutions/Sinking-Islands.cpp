void setXToY(vector<vector<int>> &board, int i, int j, int x, int y)
{
    if (i < 0 || i >= board.size() || j < 0 || j >= board[i].size())
    {
        // out of bound
        return;
    }
    else if (board[i][j] != x)
    {
        // no need to do anything here
        return;
    }
    else
    {
        // expand
        board[i][j] = y;
        setXToY(board, i - 1, j, x, y);
        setXToY(board, i + 1, j, x, y);
        setXToY(board, i, j - 1, x, y);
        setXToY(board, i, j + 1, x, y);
    }
}

vector<vector<int>> solve(vector<vector<int>> &board)
{
    // 1. set non-enclosed islands to -1
    // 2. set remaining islands to 0
    // 3. set non-enclosed islands back to 1

    // 1
    int nRows = board.size();
    int nCols = board[0].size();

    // top and bottom row
    for (int r : {0, nRows - 1})
        for (int c = 0; c < nCols; c++)
            setXToY(board, r, c, 1, -1);

    // left and right col
    for (int c : {0, nCols - 1})
        for (int r = 0; r < nRows; r++)
            setXToY(board, r, c, 1, -1);

    // 2
    for (int r = 0; r < nRows; r++)
        for (int c = 0; c < nCols; c++)
            if (board[r][c] == 1)
                setXToY(board, r, c, 1, 0);

    // 3
    for (int r = 0; r < nRows; r++)
        for (int c = 0; c < nCols; c++)
            if (board[r][c] == -1)
                setXToY(board, r, c, -1, 1);

    return board;
}
