bool solve(string s0, string s1)
{
    // s1 is a rotated version of s0 if s1 is present in concat(s0, s0)
    // eg "hello" and "llohe"
    // concat(s0, s0) = "hellohello", "llohe" is present
    return s0.length() == s1.length() && (s0 + s0).find(s1) != string::npos;
}
