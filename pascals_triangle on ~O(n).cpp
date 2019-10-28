//https://leetcode.com/problems/pascals-triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        if(numRows <= 0) return a; 
        a.assign(numRows, vector<int>(1)); 
    
        for(int i = 0; i < numRows; i++){
            a[i][0] = 1; 
            if(i == 0) continue; 
            for(int j =1; j < i; j++){
                a[i].push_back(a[i-1][j] + a[i-1][j-1]); 
            }
            a[i].push_back(1); 
        }
        
        return a; 
    }
};