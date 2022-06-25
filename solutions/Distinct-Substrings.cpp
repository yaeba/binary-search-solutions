int solve(string s)
{
    // instead of slicing every possible substring
    // it is more efficient to generate rolling hash
    // and add to set instead
    // we just need a good enough hash function with low
    // hash collisions

    unordered_set<unsigned long> seen;
    for (int i = 0; i < s.length(); i++)
    {
        // use djb2 hash alg from (http://www.cse.yorku.ca/~oz/hash.html)
        unsigned long hash = 5381;
        for (int j = i; j < s.length(); j++)
        {
            hash = ((hash << 5) + hash) + s[j] - 'a';
            seen.insert(hash);
        }
    }
    return seen.size();
}
