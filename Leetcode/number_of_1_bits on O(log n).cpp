//https://leetcode.com/problems/number-of-1-bits/
class Solution {
public:
    int hammingWeight(uint32_t n) {
     int k =0; 
        while(n > 0){
            k += n%2; 
            n/=2; 
            
        }
        return k; 
    }
};