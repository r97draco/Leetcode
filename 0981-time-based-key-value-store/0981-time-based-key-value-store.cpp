class TimeMap {
    unordered_map<string, map<int, string>> ds;
public:
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        ds[key][timestamp]= value;
    }
    
    string get(string key, int timestamp) {
        auto it = ds[key].upper_bound(timestamp);
        return it==ds[key].begin()? "": prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */