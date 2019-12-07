//https://leetcode.com/problems/word-ladder
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> a(wordList.begin(), wordList.end()); 
        unordered_map<string, int> b; 
        queue<string> q; 
        b[beginWord] = 1; 
        q.push(beginWord); 

        while(!q.empty()){
              string word = q.front(); q.pop(); 
                 for(int i = 0; i < word.size(); i++){
                     string word_new_word = word; 
                     for(char ch = 'a'; ch <= 'z'; ch++){
                         word_new_word[i] = ch; 
                         if(a.count(word_new_word) && word_new_word == endWord) return b[word] + 1; 
                         if(a.count(word_new_word) && !b.count(word_new_word)){
                            q.push(word_new_word); 
                            b[word_new_word] = b[word] + 1; 
                         }
                     }

                 }

        }
        return 0; 
    }
};