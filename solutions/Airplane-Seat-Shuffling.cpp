double solve(int n)
{
    // edge case, n = 1
    if (n == 1)
        return 1;

    // when n > 1, it is a bit more involving
    // lets break down into 3 possible scenarios, A, B and C
    // A, first person picks his own seat
    // > Chance of happening = 1/n
    // > everyone sits accordingly, last person gets to sit his
    //   assigned seat. Prob = 1
    // B, first person picks last person's seat
    // > Chance of happening = 1/n
    // > not matter how, last person can't sit his assigned seat
    //   Prob = 0
    // (IMPORTANT) Note that A and B cancel out each other
    // C, first person picks seat that's not of his own nor last person's
    // > Chance of happening = 1/(n-2)
    // > second person will need to pick randomly, this is RECURSION (without first person)
    //   think of it as C_A, C_B, and C_C, with a new_n = n - 1

    // Eventually C[_C]* will reach the base case which is n = 2
    // when this happens, it is clear that Prob = 1/2
    // when we unfold, all As will be cancelled by corresponding Bs
    // and thus final Prob is 0.5
    return 0.5;
}
