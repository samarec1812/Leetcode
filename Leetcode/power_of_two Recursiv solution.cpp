//https://leetcode.com/problems/power-of-two/submissions/
class Solution {
public:
    bool isPowerOfTwo(int n) {
          if (n == 1) {
        return true;
    }
        else if(n == 0) return false; 
    else if(n % 2 == 0) return isPowerOfTwo(n/2);
    
        return false;

    }
};