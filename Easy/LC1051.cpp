// LC 1051. Height Checker

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int > counter(101,0);
        for(int h:heights)
            ++counter[h];
        int ret =0;
        int idx = -1;       
        for(int i=0;i<101;++i)
        {
         while(--counter[i]>-1){
             if(heights[++idx]!=i)
                 ++ret;
         }    
        }
        return ret;
    }
};
