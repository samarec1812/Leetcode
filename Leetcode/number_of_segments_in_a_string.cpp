//https://leetcode.com/problems/number-of-segments-in-a-string
class Solution {
public:
    int countSegments(string s) {
       int k = 0; 
        for(int i = 0; i < s.size(); ++i){
            if(s[i]!= ' ' && (i == 0 || s[i-1]== ' '))
                k++; 
            
        }
        return k; 
    }
};