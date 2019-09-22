class Solution {
public:
  unsigned long long int  Recurs(int n){
    if(n == 1 || n ==0 ) return 1;
    else   {
        return Recurs(n-1)*n;

 }
}
    int trailingZeroes(int n) {
   int k = 0; 
      unsigned  long long int  p = Recurs(n);
while(p % 10 == 0)
{
    k++;
    p/=10;
}
return k; 
         
        }    
};