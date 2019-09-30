//https://leetcode.com/problems/sort-array-by-parity
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
           vector<int>b;
    for(auto &w :A){
        if(w % 2 == 0 ) b.push_back((w));
    }
    for(auto &w :A){
        if(w % 2 != 0) b.push_back((w));
    }
        return b; 
    }
};