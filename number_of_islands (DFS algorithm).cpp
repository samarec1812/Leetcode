//https://leetcode.com/problems/number-of-islands

class Solution {
public:
   
    int numIslands(vector<vector<char>>& grid) {
       if(grid.empty() ) return 0; 
        int m = grid.size(), n = grid[0].size() ;
        int kek = 0; 
        vector<vector<bool>>a(m, vector<bool>(n, false)); 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1' && !a[i][j]){
                    DFS(grid, a, i, j); 
                 kek++;    
                }
                
            }
        }
        
    return kek; 
    }
     void DFS(vector<vector<char>>& grid, vector<vector<bool>>& a, int b, int c){
            if(b < 0 || b >= grid.size()) return; 
            if(c < 0 || c >= grid[0].size()) return; 
            if(grid[b][c]!='1' || a[b][c]) return; 
            a[b][c] = true; 
            
            DFS(grid, a, b-1, c); 
            DFS(grid, a, b+1, c);
            
            DFS(grid, a, b, c-1); 
            DFS(grid, a, b, c+1);
            
            
        }
};