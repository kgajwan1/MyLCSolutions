//day 12   Last Stone Weight
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     priority_queue<int> pq(stones.begin(),stones.end());
        
       while(pq.size()!=1)
        {
            int x =pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            pq.push(max(x,y)-min(x,y));
        }
        return pq.top();
    }
};