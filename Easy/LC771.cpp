//LC 771 Jewels and Stones
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> jewels;
        for(int i=0; i<J.length(); i++){
            jewels[J[i]]++;
        } 
        int res = 0;
        for(int i=0; i<S.length(); i++){
            if(jewels.count(S[i])){
                res++;
            }
        }
        return res;
    }
};