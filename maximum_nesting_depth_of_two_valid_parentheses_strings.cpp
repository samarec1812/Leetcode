//https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
      int depth = 0; 
        vector<int>res; 
        for(size_t i=0; i<seq.size(); i++)
        {
            if(seq[i] == '(')
                depth++;
            res.push_back(depth%2);
            if(seq[i] == ')')
                depth--;
        } 
        
        return res;
    }
};