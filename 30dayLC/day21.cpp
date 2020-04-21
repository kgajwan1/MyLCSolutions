/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        vector<int> mat = binaryMatrix.dimensions();
        int rows = mat[0];
        int cols=mat[1];
        if (rows ==0 || cols ==0)
            return -1;
        int res = -1;
        int r=0, c = cols-1;
        while(r< rows and c>=0){
            if(binaryMatrix.get(r,c)==1){
                res = c;
                c--;
            }
            else 
                r++;
        }
        return res;
        
    }
};
