class HashTable
{
private:
    vector<vector<pair<int, int>>> map;
    int SIZE = 2003;

    int hash(int key)
    {
        return key % SIZE;
    }

    vector<pair<int, int>>::iterator find(int key)
    {
        return find_if(map[hash(key)].begin(), map[hash(key)].end(),
                       [&key](const pair<int, int> &p)
                       { return p.first == key; });
    }

public:
    HashTable()
    {
        map = vector<vector<pair<int, int>>>(SIZE);
    }

    void put(int key, int val)
    {
        auto it = find(key);

        if (it != map[hash(key)].end())
        {
            it->second = val;
        }
        else
        {
            map[hash(key)].push_back({key, val});
        }
    }

    int get(int key)
    {
        auto it = find(key);

        if (it != map[hash(key)].end())
        {
            return it->second;
        }
        else
        {
            return -1;
        }
    }

    void remove(int key)
    {
        auto it = find(key);

        if (it != map[hash(key)].end())
        {
            map[hash(key)].erase(it);
        }
    }
};
