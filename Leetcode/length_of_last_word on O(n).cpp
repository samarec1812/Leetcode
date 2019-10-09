//https://leetcode.com/problems/length-of-last-word
class Solution {
public:
   int lengthOfLastWord(string s) {
 int p = 0; 
       for(int i =0; i < s.size(); i++){
           if(s[i] !=' '){
               if(i!=0 && s[i-1] == ' ' ) p=1; 
               else p++; 
           }
           
       }
       return p; 
}
};