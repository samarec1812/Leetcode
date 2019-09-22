class Solution {
public:
    int r,n; 
    string s;
    vector<int>a; 
    vector<bool>used;
    string getPermutation(int n, int k) {
        
       vector<int>a(n); 
        vector<bool>used(n+1, false); 
        string gg = rec(0, k); 
        return gg; 
        
    }
   
    
    string out(int p)
{
	
	r++; //для подсчёта перестановок без повторений
	if (r == p) {
		for (int i = 0; i < n; i++)
		{
			int j = a[i];
			string s1 = to_string(j);

			s += s1;
	
			//cout << m[i]; 
		}
	}
	 
	return s;
}
string rec(int idx, int p)  //перестановки из n элементов
{
	
	int r = 1; 
	if (idx == n)
	{
		 
		string s="k";
			s = out(p);
			return s; 
	}
	
	for (int i = 1; i <= n; i++)
	{   
		if (used[i]) continue; 
		a[idx] = i;
		used[i] = true; 
		rec(idx + 1,p);
		used[i] = false; 
	}
	return s; 
}
};