// Solution 1 -> direct array


class MyHashMap {
    vector<int> table;
public:
    MyHashMap() {
        table.resize(1000001, -1);
    }
    
    void put(int key, int value) {
        table[key] = value;
    }
    
    int get(int key) {
        return table[key];
    }
    
    void remove(int key) {
        table[key] = -1;
    }
};

// Solution 2 -> buckets + chaining

class MyHashMap {
    static const int SIZE = 1000; // number of buckets
    vector<list<pair<int,int>>> table;

    int hash(int key) {
        return key % SIZE;
    }
    
public:
    MyHashMap() {
        table.resize(SIZE);
    }
    
    void put(int key, int value) {
        int idx = hash(key);
        for (auto &p : table[idx]) {
            if (p.first == key) {
                p.second = value; // update if exists
                return;
            }
        }
        table[idx].push_back({key, value}); // insert new
    }
    
    int get(int key) {
        int idx = hash(key);
        for (auto &p : table[idx]) {
            if (p.first == key) return p.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int idx = hash(key);
        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) {
            if (it->first == key) {
                table[idx].erase(it);
                return;
            }
        }
    }
};
