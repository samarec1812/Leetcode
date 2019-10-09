//https://leetcode.com/problems/maximum-number-of-balloons
class Solution {
public:
    int maxNumberOfBalloons(string text) {
	//balloon
	map<char, int>k = {{'b',1}, {'a', 1}, {'l',2}, {'o', 2}, {'n',1}}; 
        map<char, int>m; 
        for(auto& w : text){
            m[w]++; 
        }
        int k1 =INT_MAX; 
        for(auto&w :k){
            k1=min(k1, m[w.first]/w.second); 
        }
        return k1; 
}

};