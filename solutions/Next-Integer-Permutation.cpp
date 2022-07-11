int solve(int n)
{
    string digits = to_string(n);

    // from right to left, find first decreasing number
    int i = digits.size() - 1;
    while (i >= 0 && digits[i - 1] >= digits[i])
        i--;
    i--;

    // swap it with first number greater than it in tail
    if (i >= 0)
    {
        int j = digits.size() - 1;
        while (j > i && digits[j] <= digits[i])
            j--;
        swap(digits[i], digits[j]);
    }

    // reverse the remaining numbers
    reverse(digits.begin() + i + 1, digits.end());

    return stoi(digits);
}
