int solve(int n, int a, int b) {
    int conditionB = b + 1;
    int conditionA = n - a;

    return std::min(conditionA, conditionB);
}
