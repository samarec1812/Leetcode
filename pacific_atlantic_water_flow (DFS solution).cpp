//https://leetcode.com/problems/pacific-atlantic-water-flow
class Solution {
public:
  vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        if(n == 0) return {};
        int m = matrix[0].size();
        
        vector<vector<int>> res;
        vector<vector<bool>> pacafic_ocean(n, vector<bool>(m, false));
        vector<vector<bool>> atlantic_ocean(n, vector<bool>(m, false));
        
        for(int i=0; i<m; i++){
            DFS(matrix, pacafic_ocean, INT_MIN, 0, i);
            DFS(matrix, atlantic_ocean, INT_MIN, n-1, i);
        }
        
        for(int i=0; i<n; i++) {
            DFS(matrix, pacafic_ocean, INT_MIN, i, 0);
            DFS(matrix, atlantic_ocean, INT_MIN, i, m-1);
        }
        
        for(int i=0; i<n; i++){
           for(int j=0; j<m; j++) {
                if(pacafic_ocean[i][j] && atlantic_ocean[i][j])
                    res.push_back(vector<int> {i,j});
            }
        }
        return res;
    }
    
    void DFS(vector<vector<int>>& matrix, vector<vector<bool>>& visit, int ost, int i, int j){
      int m = matrix.size(), n = matrix[0].size(); 
      if(i < 0 || i>=m || j < 0 || j>=n || visit[i][j] || matrix[i][j] < ost) return; 
        visit[i][j] = true; 
        DFS(matrix, visit, matrix[i][j], i+1, j); 
        DFS(matrix, visit, matrix[i][j], i-1, j); 
         DFS(matrix, visit, matrix[i][j], i, j+1); 
         DFS(matrix, visit, matrix[i][j], i, j-1); 
        
    }
};