//LC 349 Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int> st;
        
        vector<int> res;
        
        for(int x:nums1)
            st.insert(x);
        
        for(int x:nums2)
            if(st.find(x) != st.end()){
                res.push_back(x);
                st.erase(x);
            }
        
        
        return res; 
    }
};