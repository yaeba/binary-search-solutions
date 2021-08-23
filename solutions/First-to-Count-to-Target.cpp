bool solve(int k, int target)
{
    // for whichever player, these are the desirable targets along the way
    // eg target = 10, k = 3
    // 1 2 3 4 5 6 7 8 9 10
    // x √ x x x √ x x x  √
    // ie first player can always win if pick 2

    // The math is that, if x is a number such that
    // T - k <= x <= T - 1, then number after x is guaranteed to be >= T
    // thus, player should choose T - k - 1 in order to win
    // this process can be repeated indefinitely to show that first player must pick
    // T mod (k + 1) in order to win
    // which also means that T % (k + 1) must not be 0
    return target % (k + 1);
}
