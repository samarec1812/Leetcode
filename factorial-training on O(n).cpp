//https://leetcode.com/problems/factorial-trailing-zeroes/
class Solution {
public:
   
    int trailingZeroes(int n) {
   int k = 0; 
    while(n){
        k +=n/5; 
        n/=5; 
    }
return k; 
         
        }
        
};
