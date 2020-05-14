//remove k digits

class Solution {
public:
    string removeKdigits(string num, int k) {
       string ans = "";                                         // treat ans as a stack in below for loop
       
       for (char c : num) {
           while (ans.length()!=0 && ans.back() > c && k) {
               ans.pop_back();                                  // make sure digits in ans are in ascending order
               k--;                                             // remove one char
           }
           
           if (ans.length() !=0 || c != '0') { ans.push_back(c); }  // can't have leading '0'
       }
       
       while (ans.length()!=0 && k--) { ans.pop_back(); }          // make sure remove k digits in total
       
       return ans.empty() ? "0" : ans;
}
};
