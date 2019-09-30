//https://leetcode.com/problems/n-repeated-element-in-size-2n-array
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
          int sizen = A.size()/2;
int y=0;
        for(auto &w: A){
        if(count(A.begin(), A.end(), w) == sizen){
            y=w;  break; 
        }
    }
        return y; 
    }
};