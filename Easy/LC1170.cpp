//LC 1170. Compare Strings by Frequency of the Smallest Character

class Solution {
    int calFre(string s) {
        int res = -1;
        int dic[256] = {};
        for(char c:s)
            dic[c]++; 
        for(int i = 0; i < 256; ++i) {
            if(dic[i] > 0) {
                res = dic[i];
                break;
            }
                
        }
        return res;
    }
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {

        vector<int> dic(12,0);
        for(string& word: words) {
            dic[calFre(word)]++;
        }
        for(int i = 9; i >= 0; --i)
            dic[i] = dic[i] + dic[i + 1];
        vector<int> res;
        for(string& query: queries) {
            int temp = calFre(query);
            res.push_back(dic[temp + 1]);
        }
        return res;
    }
};