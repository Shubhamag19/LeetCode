class LRUCache {
public:
    int capacity;
    list<int> lru;
    unordered_map<int, list<int>::iterator> mp;
    unordered_map<int, int> kv;
    
    LRUCache(int capacity) {
        this->capacity = capacity;        
    }
    
    int get(int key) {
        if(kv.count(key)==0) return -1;
        update(key);
        return kv[key];        
    }
    
    void put(int key, int value) {
        if(kv.size()==capacity && kv.count(key)==0) evict();
        update(key);
        kv[key] = value;
    }
    
    void update(int key){
        if(kv.count(key)) lru.erase(mp[key]);
        lru.push_front(key);
        mp[key] = lru.begin();
    }
    
    void evict(){
        mp.erase(lru.back());
        kv.erase(lru.back());
        lru.pop_back();
    }
};
