//https://leetcode.com/problems/to-lower-case
class Solution {
public:
    string toLowerCase(string str) {
 for(int i =0; i < str.size(); i++){
        if ('A'<=str[i] && str[i]<='Z'){
            str[i]=char(((int)str[i])+32);
        }
    }
   return str; 
    }
};