//LC 461. Hamming Distance
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int dist = 0;
        while(n != 0)
        {
            n &= (n-1);
            dist++;
        }
        return dist;
    }
    
};