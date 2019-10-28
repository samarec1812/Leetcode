//https://leetcode.com/problems/broken-calculator
class Solution {
public:
    int brokenCalc(int X, int Y) {
        if(X == Y) return 0; 
        int i = 0; 
        while(X < Y){
            i++; 
            if(Y%2 == 1) Y++; 
            else Y/=2; 
        }
        
        return X-Y+i; 
    }
};