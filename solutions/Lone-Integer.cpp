int solve(vector<int> &nums)
{
    // it is possible to solve this using bit-trick
    // eg for bits at 0, 1, 2, ..., 31
    // find those that don't appear thrice (_ % 3 == 1) and reconstruct

    // what's more challenging is to solve this is one pass (ie without nested for loops)
    // imagine we can find XOR of all numbers occuring ONCE (say "once")
    // assuming input is valid, "once" will be the final ans
    // but to compute "once", we need a way to make sure numbers appearing THRICE don't go in to it
    // hence we need another var, XOR of all numbers occuring TWICE ("twice")
    // with "twice", we can check if a number appears for the third time, and if so we can remove it
    // from "once"
    int once = 0, twice = 0;

    for (int num : nums)
    {
        int thrice = twice & num; // if num appeared twice previously, thrice will be set
        twice ^= once & num;      // if num appeared once previously, xor it with twice
        once ^= num;              // xor with once, because it appears twice it will be removed
        once ^= thrice;           // remove num appeared thrice in once
        twice ^= thrice;          // remove num appeared thrice in twice
    }
    return once;
}
