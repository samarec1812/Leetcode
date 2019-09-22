class Solution {
public:
    
    double myPow(double x, int n) {
 if(n >= 0) {
    if(n == 0){
        return 1; 
    }
else if(n % 2 == 0) { return myPow(x*x, n/2);  }
     else {
         return myPow(x, n-1)*x; 
     }
}
else {
    double b = 1, c =x;
  long long k =fabs(n);
   if(k % 2 == 0) { return 1.0/(myPow(x*x, k/2));  }
     else {
           return 1.0/(myPow(x, k-1)*x);
    }
    }
    }
};