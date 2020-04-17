//942. DI String Match

class Solution {
public:
    vector<int> diStringMatch(string S) {
        /* No fucking idea what the question is asking based on description alone, but it 
           appears we have to use the lowest number (0) when encountering an I, and 
           highest number (S.size()) when encountering a D.
           
           e.g. "IDID" maps to [0,4,1,3,2]
           The input string maps out a relationship between the integers. 
           As such, with 4 relationships. that means you need 5 integers.

            0 Increases to 4
            4 Decreases to 1
            1 Increases to 3
            3 Decreases to 2
        */
        int lo = 0;
        int hi = S.size();
        vector<int> ret;
        bool exitCond = false;
        for (int i = 0; i < S.size() + 1; i++) {
            if (S[i] == 'I')
                ret.push_back(lo++);
            else if (S[i] == 'D')
                ret.push_back(hi--);
            // Since our array to be returned is always one element longer than input string,
            // below is a special case where we run last loop again to facilitate this.
            if (i == S.size() - 1) {
                if (exitCond == false)  // boolean used so that we only enter this if ONCE ever.
                    --i;  // run last loop once more
                exitCond = true;
            }
        }
        return ret;
    }
};