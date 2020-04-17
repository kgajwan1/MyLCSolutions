//LC 1207. Unique Number of Occurrences   
//pretty sure it is in daily challenge too
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occ;
        unordered_set<int> unique;
        for (auto i : arr) occ[i]++;
        for (auto it : occ) {
            if (unique.find(it.second) != unique.end()) return false;
            unique.insert(it.second);
        }
        return true;
    }
}; 