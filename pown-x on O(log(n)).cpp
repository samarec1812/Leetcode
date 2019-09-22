class Solution {
public:
    double myPow(double x, int n) {
 if(n >= 0) {
    double b = 1, c =x;
    int k =n;
    while (k != 0) {
       if(k%2 ==0){
           k/=2;
           c=c*c;
       }else {
           k-=1;
           b*=c;
       }

    }
return b;
}
else {
    double b = 1, c =x;
  long long k =fabs(n);
    while (k != 0) {
        if(k%2 ==0){
            k/=2;
            c=c*c;
        }else {
            k-=1;
            b*=c;
        }

    }
    return 1.0/b;   
    }
    }
};