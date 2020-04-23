//  Bitwise AND of Numbers Range

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
       while(n>m){
           n&=(n-1);
       }
        return n;
    }
};
