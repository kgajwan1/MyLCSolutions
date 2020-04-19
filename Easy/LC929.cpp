//LC 929 Unique Email Addresses

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> ust;
        
        for (auto str:emails)
        {
            string tmp;
            for (auto c:str)
            {
                if (c == '.') continue;
                if (c == '+' || c == '@') break;
                tmp.push_back(c);
            }
            ust.insert(tmp + str.substr(str.find('@')));
        }
        
        return ust.size();
    }
};