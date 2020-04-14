//LC 1365. How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int n[101] = {0};
        for (int i = 0; i < nums.size(); i ++) {
            n[nums[i]] ++;
        }
        for (int i = 1; i < 101; i ++) {
            n[i] += n[i-1];
        }
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i] == 0)
                ans.push_back(0);
            else
                ans.push_back(n[nums[i]-1]);
        }
        return ans;
    }
};