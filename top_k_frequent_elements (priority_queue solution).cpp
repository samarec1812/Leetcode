//https://leetcode.com/problems/top-k-frequent-elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         
        unordered_map<int, int>pr; 
        priority_queue<pair<int, int>>tr;
        for(auto w: nums){
             ++pr[w];  
        }
        for(auto w: pr){
            tr.push({w.second, w.first}); 
        }
        vector<int>res; 
        
        for(int i = 0; i< k; i++){
            res.push_back(tr.top().second); 
            tr.pop(); 
        }
     return res; 
    }
};