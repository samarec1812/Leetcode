//https://leetcode.com/problems/implement-strstr
class Solution {
public:
 
int strStr(string haystack, string needle) {
	if (needle.empty()) return 0;
int a = haystack.size(), b = needle.size();    
 if(a < b) return -1;
 
	for (int i = 0; i <= a-b; ++i) {
		
			int j = 0; 
			for(j =0; j < b; ++j){
                if(haystack[i+j] != needle[j]) break; 
            }
		
		if(j == b) return i; 
	}
	 
 return -1;

}
};