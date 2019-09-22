class Solution {
public:
    string multiply(string num1, string num2) {
   string s; 
        if(num1 =="0" || num2 == "0") return "0"; 
        int f = num1.size()+ num2.size() -2; 
        int g = 0; 
        vector<int>k(f+2);
        for(int i = 0; i < num1.size(); ++i){
            for(int j = 0; j < num2.size(); ++j){
                k[f-i-j] += (num1[i]- '0')*(num2[j]-'0'); 
            }
        }
        for(int i = 0; i < f+2; ++i){
            k[i] +=g; 
            g = k[i]/10; 
            k[i] %=10; 
        }
        int z = f+1; 
        while( k[z] == 0) --z; 
        if( z < 0 ) return "0"; 
        while( z >= 0) s.push_back(k[z--] + '0'); 
        return s; 
    
    }
};