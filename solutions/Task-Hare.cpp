int solve(vector<int> &tasks, vector<int> &people)
{
    sort(tasks.begin(), tasks.end());
    sort(people.begin(), people.end());

    int i = 0;

    for (int n : people)
    {
        if (i >= tasks.size())
            break;
        else if (n >= tasks[i])
            i++;
    }

    return i;
}
