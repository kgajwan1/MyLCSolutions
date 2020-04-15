//day 7 Counting Elements

class Solution {
public:
    int countElements(vector<int>& arr) {
        int count =0;
        unordered_map<int,int> umap;
        
         for(auto u:arr){
            umap[u]++;
        }
        for(int i=0;i<arr.size();i++){
            if(umap.find(arr[i]+1)!=umap.end() &&umap.find(arr[i])!=umap.end() )
                count++;
        }
    return count;
    }
};