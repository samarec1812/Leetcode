//https://leetcode.com/problems/sqrtx/
class Solution {
public:
    int mySqrt(int x) {
            double f = 1;
    for (;;) {
        double xf = (f + x / f) / 2;
        if (abs (f - xf) < 1e-10)  break; //точность
        f = xf;
    }
   int y =int(f);
        return y ; 
    }
};
