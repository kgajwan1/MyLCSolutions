//LC 561. Array Partition I
//since we have a range, a counting sort is possible, but I just was a bit lazy for that

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
         int sum =0;       
        for(int i=0;i<=nums.size()-1;i+=2)
            {
                sum+=nums[i];
            }   
                return sum; 
        
    }
};