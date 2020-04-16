//  Valid Parenthesis String
//this is c++ version of  Mai Thanh Hiep 's java solution. I made my own with 2 stacks (solution 2), but this is here at top simply because of it's sheer brilliance 
class Solution {
public:
    bool checkValidString(string s) {
        if (s == "") return true;
        int cmin = 0, cmax = 0; // open parentheses count in range [cmin, cmax]
        for (char c : s.toCharArray()) {
            if (c == '(') {
                cmax++;
                cmin++;
            } else if (c == ')') {
                cmax--;
                cmin--;
            } else if (c == '*') {
                cmax++; // if `*` become `(` then openCount++
                cmin--; // if `*` become `)` then openCount--
                // if `*` become `` then nothing happens
                // So openCount will be in new range [cmin-1, cmax+1]
            }
            if (cmax < 0) return false; // Currently, don't have enough open parentheses to match close parentheses-> Invalid
                                        // For example: (()))(
            cmin = Math.max(cmin, 0);   // It's invalid if open parentheses count < 0 that's why cmin can't be negative
        }
        return cmin == 0; // Return true if can found `openCount == 0` in range [cmin, cmax]
    }  
};

 // Solution 2
class Solution {
public:
    bool checkValidString(string s) {
      stack<int> open,asterix; 
      for(int i=0;i<s.length();i++)
      {
          if(s[i] == ')')
          {
              if(!open.empty()) open.pop();
              else if(!asterix.empty()) asterix.pop();
              else return false;
          }
          else if(s[i] == '(')   open.push(i);
          else asterix.push(i);
      }
      while(!open.empty() && !asterix.empty())
      {
         if(open.top() > asterix.top()) return false;
         open.pop();
          asterix.pop();
      }
        return open.empty();
    }
};
