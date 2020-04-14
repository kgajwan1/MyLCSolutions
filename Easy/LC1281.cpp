//LC 1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul =1;
        int add =0;
        int res =0;
        int k =n;
        while(k>=1){
            int s= k%10;
            mul*=s;
            add+=s;
            k/=10;
        }
       
        return (mul-add); 
    }
};