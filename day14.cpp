//day 14   Perform String Shifts

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int sum=0;
        for (auto pp:shift){
            if(pp[0]==0)
                 sum-=pp[1];
            else
                 sum+=pp[1];
        }
        int n = s.length();
        sum%=n;
        if( sum<0){
             sum+=n;
        }
        return s.substr(n- sum,n)+ s.substr(0,n- sum);
    }
};