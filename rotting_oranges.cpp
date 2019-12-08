//https://leetcode.com/problems/rotting-oranges
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<int> grid_row = {-1,0,1,0};
        vector<int> grid_col = {0,1,0,-1};
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        //Scan
        queue<int> q;
        map<int,int> verh; 
        
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j] == 2){
                    q.push(i*col+j);
                    verh.insert(make_pair(i*col+j, 0));
                }
            }
        }
        
       // int minimum = 0;
        int pos,r,c;
        while(!q.empty()){
            pos = q.front();
            q.pop();
            r = pos / col;
            c = pos % col;
            for(int i = 0; i < 4; ++i){
                int _row = r + grid_row[i];
                int _col = c + grid_col[i];
                if(_row >= 0 && _row < row && _col >= 0 &&  _col < col && grid[_row][_col] == 1 ){
                    grid[_row][_col] =2;
                    int _pos = _row*col + _col;
                    q.push(_pos);
                    verh.insert(
                        make_pair(_pos, verh.find(pos)->second+1) );
                    ans = verh.find(_pos)->second;
                }
            }
            
        }
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j] == 1)
                    return -1;
            }
        }
        return ans;
    }
};