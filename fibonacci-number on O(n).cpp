class Solution {
public:
    int fib(int N) {
       if(N <2) return N; 
        else if(N ==2 ) return 1; 
        int m = 1 ,n =1, chlen =0; 
         for(int i =2; i < N; ++i){
            chlen = m+n; 
             m = n; 
             n = chlen; 
             
         }
        return chlen; 
    }
};