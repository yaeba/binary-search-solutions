class StockMarket
{
private:
    set<pair<int, string>> orderedStocks;
    unordered_map<string, int> stockToAmount;

public:
    StockMarket(vector<string> &stocks, vector<int> &amounts)
    {
        for (int i = 0; i < stocks.size() && i < amounts.size(); i++)
        {
            orderedStocks.insert({-1 * amounts[i], stocks[i]});
            stockToAmount[stocks[i]] = amounts[i];
        }
    }

    void add(string s, int amount)
    {
        if (stockToAmount.count(s))
        {
            orderedStocks.erase({-1 * stockToAmount[s], s});
            // update amount
            stockToAmount[s] += amount;
        }
        else
        {
            stockToAmount[s] = amount;
        }
        orderedStocks.insert({-1 * stockToAmount[s], s});
    }

    vector<string> top(int k)
    {
        vector<string> res;

        for (auto &it : orderedStocks)
        {
            res.push_back(it.second);
            if (res.size() == k)
                break;
        }
        return res;
    }
};
