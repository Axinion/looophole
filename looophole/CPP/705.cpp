// Solution 1 -> (boolean vector)

class MyHashSet {
    vector<bool> table;
public:
    MyHashSet() {
        table.resize(1000001, false);
    }
    
    void add(int key) {
        table[key] = true;
    }
    
    void remove(int key) {
        table[key] = false;
    }
    
    bool contains(int key) {
        return table[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */


// Solution 2 -> hash + chaining


class MyHashSet {
    static const int SIZE = 1000;
    vector<list<int>> table;

    int hash(int key){
        return key%SIZE;
    }
public:
    MyHashSet() {
        table.resize(SIZE);
    }
    
    void add(int key) {
        int idx = hash(key);
        for(int x: table[idx]){
            if (x==key){
                return;
            }
        }
        table[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = hash(key);
        table[idx].remove(key);
    }
    
    bool contains(int key) {
        int idx = hash(key);
        for(int x: table[idx]){
            if(x==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
