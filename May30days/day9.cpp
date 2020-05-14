//  Valid Perfect Square
//check if number is valid perfect square or not
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 1;
        while(num>0){
            num-=i;
            i+=2;
        }
        return num==0;
    }
};
