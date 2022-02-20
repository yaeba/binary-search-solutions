class WebBrowser
{
private:
    vector<string> pages;
    int curr, max_forward;

public:
    WebBrowser(string homepage)
    {
        pages.push_back(homepage);
        curr = 0;
        max_forward = 0;
    }

    void visit(string page)
    {
        if (curr == pages.size() - 1)
        {
            pages.push_back(page);
            curr++;
        }
        else
        {
            pages[++curr] = page;
        }
        max_forward = curr;
    }

    string back(int n)
    {
        curr = std::max(0, curr - n);
        return pages[curr];
    }

    string forward(int n)
    {
        curr = std::min(max_forward, curr + n);
        return pages[curr];
    }
};
