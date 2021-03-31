bool solve(string typed, string target)
{
    if (typed.size() <= target.size())
        return typed == target;

    int typedIdx = 0, targetIdx = 0;

    while (typedIdx < typed.size() && targetIdx < target.size())
    {
        char typedChar = typed[typedIdx];
        char targetChar = target[targetIdx];

        if (typedChar != targetChar)
            return false;
        int typedCount = 0, targetCount = 0;
        for (; typedIdx < typed.size() && typed[typedIdx] == typedChar; typedIdx++, typedCount++)
            ;
        for (; targetIdx < target.size() && target[targetIdx] == targetChar;
             targetIdx++, targetCount++)
            ;
        if (typedCount < targetCount)
            return false;
    }

    return typedIdx == typed.size() && targetIdx == target.size();
}
