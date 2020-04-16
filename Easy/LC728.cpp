//LC 728 Self Dividing Numbers

class Solution {
public:
    bool isSelfDividing(int n)
    {
        int temp = n;
        while(temp>0)
        {
            int d = temp%10;
            if(d ==0 || n%d !=0)
                return false;
            temp/=10;
        }        
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i =left;i<=right;i++)
        {
            if (isSelfDividing(i))
            {
                res.push_back(i);
            }
        }
        return res;
    }
    
};
