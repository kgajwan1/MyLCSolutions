//LC 136. Single Number
//also day 1 daily challenge
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=nums[0];
        for (int i=1;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};
