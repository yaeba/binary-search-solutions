string solve(string sentence)
{
    stringstream strStream(sentence);
    ostringstream outputStream;
    stack<string> strStack;
    string word;

    while (strStream >> word)
    {
        strStack.push(word);
    }

    while (!strStack.empty())
    {
        word = strStack.top();
        strStack.pop();
        outputStream << word;

        if (!strStack.empty())
            outputStream << " ";
    }

    return outputStream.str();
}
