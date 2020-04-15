//day 4   Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for (int i=0;i< nums.size();i++)
        {
            if(nums[i]!=0)
                nums[count++] = nums[i];
        }
        for (int j =count;j<nums.size() ;j++)
        {
            nums[count++]=0;
        }
    }
};