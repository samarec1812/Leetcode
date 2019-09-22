//https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int fib(int N) {
       if(N <2) return N; 
        else if(N ==2 ) return 1; 
        int m = 1 ,n =1, chl =0; 
         for(int i =2; i < N; ++i){
            chl = m+n; 
             m = n; 
             n = chl; 
             
         }
        return chl; 
    }
};
