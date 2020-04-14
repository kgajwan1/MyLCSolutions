//LC 1342: Number of Steps to Reduce a Number to Zero  

class Solution {
public:
    int numberOfSteps (int num) {
        int count = 0;
        if(num<2) return  0?0:1;
        while (num>0)
        {
            if(num%2)
                num-=1;
            else
                num/=2;
        
        ++count;        
        }
    return count;
    }
};