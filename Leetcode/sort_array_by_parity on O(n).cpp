//https://leetcode.com/problems/sort-array-by-parity
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
      int n = A.size()-1;    
    for(int i =0; i <n; i++){
       if(A[i]%2 !=0 ){
            swap(A[i--],  A[n--]);
        }
    }
        return A; 
    }
};