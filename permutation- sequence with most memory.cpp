//https://leetcode.com/problems/permutation-sequence/
class Solution {
public:
    int num;
    
void swap(int *a, int i, int j)
{
	int s = a[i];
	a[i] = a[j];
	a[j] = s;
}
bool NextSet(int *a, int n)
{
   int num = 1;
	int j = n - 2;
	while (j != -1 && a[j] >= a[j + 1]) j--;
	if (j == -1)
		return false; // больше перестановок нет
	int k = n - 1;
	while (a[j] >= a[k]) k--;
	swap(a, j, k);
	int l = j + 1, r = n - 1; // сортируем оставшуюся часть последовательности
	while (l < r)
		swap(a, l++, r--);
	return true;
}
   
    string Print(int *a, int n, int p)  // вывод перестановки
{
	
	 num++;
	
   string s;
	if(num == p){
	for (int i = 0; i < n; i++)
    { int t =a[i];


        s.push_back((char)('0' + t));
    }
	return s;

	}
	else return s;
	cout << endl;
}

    string getPermutation(int n, int k) {
        int  *a; string ss = "", sr = ""; 
	a = new int[n];
         
	for (int i = 0; i < n; i++)
    	a[i] = i + 1;
        
        sr = Print(a,n,k); 
 
      if(k == 1) {ss=ss +sr; return ss;} 
	while (NextSet(a, n))
     ss= ss+ Print(a,n,k);  
    
        return ss; 
    }
};
