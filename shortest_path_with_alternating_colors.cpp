//https://leetcode.com/problems/shortest-path-with-alternating-colors
class Solution {
public:
 
        vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        vector<vector<int>> adj_red(n,vector<int>());
        vector<vector<int>> adj_blue(n,vector<int>());
        
        vector<int> ans(n,-1);
        
        for(int i = 0; i < red_edges.size(); i++) {
            adj_red[red_edges[i][0]].push_back(red_edges[i][1]);
        }
        
        for(int i = 0; i < blue_edges.size(); i++) {
            adj_blue[blue_edges[i][0]].push_back(blue_edges[i][1]);
        }
        
        
        for(int i = 0 ; i < n ; i++) {
            ans[i] = slash(n, 0, i, adj_red, adj_blue);
        }
        return ans; 
    }
    
    int slash(int n,int a, int b, vector<vector<int>>& adj_red, vector<vector<int>>& adj_blue) {
        if(a == b) return 0;
        
        queue<pair<int,int>> q;
        vector<int> visited_red(n, false);
        vector<int> visited_blue(n,false);
        q.push({a,-1});
        int dist = 0;
        
        while(!q.empty()) {
            
            int s = q.size();
            for(int i = 0; i < s; i++) {
                int p = q.front().first;
                int color = q.front().second;
                q.pop();
                
                if(p == b) {
                    return dist;
                }
                
                if(visited_red[p] && visited_blue[p]) continue;
                
                if(color == -1) {
                    visited_red[p] = true;
                    visited_blue[p] = true;
                } else if (color == 1) {
                    visited_blue[p] = true;
                } else {
                    visited_red[p] = true;
                }

				
                if(color == -1) {
                    for(int i = 0; i < adj_red[p].size() ; i++) {
                        if(!visited_red[adj_red[p][i]]) {
                            visited_red[adj_red[p][i]] = false;
                            q.push({adj_red[p][i],0});
                        }
                    }
                    
                    for(int i = 0; i < adj_blue[p].size() ; i++) {
                        if(!visited_blue[adj_blue[p][i]]) {
                            visited_blue[adj_blue[p][i]] = false;
                            q.push({adj_blue[p][i],1});
                        }
                    }
                } else if(color == 1) { 
                    for(int i = 0; i < adj_red[p].size(); i++) {
                        if(!visited_red[adj_red[p][i]]) {
                            visited_red[adj_red[p][i]] = false;
                            q.push({adj_red[p][i],0});
                        }
                    }
                } else {
                    for(int i = 0; i < adj_blue[p].size(); i++) {
                        if(!visited_blue[adj_blue[p][i]]) {
                            visited_blue[adj_blue[p][i]] = false;
                            q.push({adj_blue[p][i],1});
                        }
                    }
                }
            }
            dist++;
        }
            
        return -1;    
    
    }
};