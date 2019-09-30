//https://leetcode.com/problems/to-lower-case
class Solution {
public:
    string toLowerCase(string str) {
         transform(str.begin(), str.end(), str.begin(), (int(*)(int))std::tolower);
   return str; 
    }
};