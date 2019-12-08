//https://leetcode.com/problems/word-ladder-ii/
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        vector<vector<string>>wordend; 
        unordered_set<string>a(wordList.begin(), wordList.end()); 
        unordered_set<string>worderland; 
        vector<string>p{beginWord}; 
        queue<vector<string>> wordq; 
        wordq.push(p);
        int w = 1, wmin = INT_MAX; 
        
        while(!wordq.empty()){
            auto r = wordq.front(); wordq.pop(); 
            if(r.size() > w){
                for(auto e: worderland) a.erase(e); 
                worderland.clear(); 
                w = r.size(); 
                if(w > wmin){
                break; 
                }
            }
            string lastick = r.back(); 
            for(int i = 0; i < lastick.size(); i++){
                string newlastick = lastick; 
                for(char ch = 'a'; ch <= 'z'; ch++){
                    newlastick[i] = ch; 
                    if(!a.count(newlastick)) continue; 
                    worderland.insert(newlastick); 
                    vector<string>nextchar = r; 
                    nextchar.push_back(newlastick); 
                    if(newlastick == endWord){
                        wordend.push_back(nextchar); 
                        wmin = w; 
                    } else wordq.push(nextchar); 
                }
            }
            }
            
        
        return wordend; 
    }
};
