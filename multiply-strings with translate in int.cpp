//https://leetcode.com/problems/multiply-strings/
class Solution {
public:
    string multiply(string num1, string num2) {
    
    long long int i = atoi(num1.c_str());
    long long  int j = atoi(num2.c_str()); 
   unsigned long long int   s = i*j; 
        return to_string(s); 
    }
};
