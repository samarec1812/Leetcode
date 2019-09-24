//https://leetcode.com/problems/flipping-an-image
class Solution {
public:
  
    vector<int> Translate( vector<int>&s, int n ){
    vector<int>ss;
    for(int j = s.size()-1;  j > -1 ; --j){
    ss.push_back(s[j]);}

       return ss;
    }

    vector<int>Obnova(vector<int>&s, int n){
          for(auto &w: s){
          if(w == 0) w =1;
           else w =0;
      }
      return s;
    }
    
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i =0; i < A.size(); i++){
     vector<int>z;
         z= Translate(A[i], A.size());
         A[i] =z;
         z = Obnova(A[i], A.size());
         A[i] =z;
        }
        return A; 
    }
};