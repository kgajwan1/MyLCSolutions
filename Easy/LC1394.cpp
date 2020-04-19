//LC 1394 Find Lucky Integer in an Array

class Solution {
private:
    unordered_map<int, int> freq;
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        for (auto &x : arr)
            ++freq[x];
        for (auto &x : arr)
            if (freq[x] == x)
                ans = max(ans, x);
        return ans;
    }
};