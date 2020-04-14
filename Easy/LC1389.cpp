//LC 1389. Create Target Array in the Given Order

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        //result vector
        vector<int> result;
        
        for(int i=0; i<nums.size(); i++)
        {
            //insert at pos index[i], value nums[i];
            result.insert(result.begin()+index[i], nums[i]);
        }
        return result;
    }
};