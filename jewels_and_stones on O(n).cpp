//https://leetcode.com/problems/jewels-and-stones
class Solution {
public:
    int numJewelsInStones(string J, string S) {
      int sum =0; 
          for(int i = 0; i < J.size(); ++i){
         sum+=count(S.begin(), S.end(), J[i]); 
         
     }
        return sum; 
    }
};