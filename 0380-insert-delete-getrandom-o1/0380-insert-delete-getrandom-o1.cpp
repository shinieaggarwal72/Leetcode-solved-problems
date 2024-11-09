class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    bool insert(int val) {
        if (dict.find(val) != dict.end()) {
            return false;
        }
        dict[val] = list.size();
        list.push_back(val);
        return true;
    }

    
    bool remove(int val) {
        auto it = dict.find(val);
        if (it == dict.end()) {
            return false;
        }
        int lastElement = list.back();
        int idx = it->second;
        list[idx] = lastElement;
        dict[lastElement] = idx;
        
        list.pop_back();
        dict.erase(it);
        return true;
    }

    
    int getRandom() {
        int randomIndex = rand() % list.size();
        return list[randomIndex];
    }

private:
    unordered_map<int, int> dict;
    vector<int> list;
};
