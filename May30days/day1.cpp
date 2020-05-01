//first bad version
class Solution {
public:
    int firstBadVersion(int n) {
       int a = 0, b=n;
        while(isBadVersion(a)==0&&isBadVersion(b)==1)
        {
            int mid = (b-a)/2+a; 
            if(isBadVersion(mid)){b=mid;}
            else a = mid;
            if(abs(a-b)==1) break;
        }
        return b;
    }
};
