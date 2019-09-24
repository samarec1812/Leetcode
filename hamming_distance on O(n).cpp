//https://leetcode.com/problems/hamming-distance
class Solution {
public:
   
    int hammingDistance(int x, int y) {
        int f =0; 
      int p = x^y; 
        while(p){
            f++; 
             p&=(p-1); 
             
        }     
        
        return f; 
    }
};