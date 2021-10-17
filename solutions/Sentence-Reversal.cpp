vector<string> solve(vector<string> &sentence)
{
    std::reverse(sentence.begin(), sentence.end());
    int left = 0;
    for (int right = 0; right < sentence.size(); right++)
    {
        if (sentence[right] == " ")
        {
            std::reverse(sentence.begin() + left, sentence.begin() + right);
            left = right + 1;
        }
    }
    std::reverse(sentence.begin() + left, sentence.end());
    return sentence;
}
