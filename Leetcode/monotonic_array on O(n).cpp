https://leetcode.com/problems/monotonic-array
class Solution {
public:
   bool isMonotonic(vector<int>& A) {
    bool f1=true; int k=0;
    int k1=0;
    for(int i =1; i< A.size(); i++) {
    if(A[i]- A[i-1] > 0) { k++; }
     else    if(A[i]- A[i-1] < 0) { k1++; }
     else if(A[i]- A[i-1]  == 0) {k++; k1++; }
    }
    if(k== A.size()-1 || k1 == A.size()-1) return f1;

    return !f1;

}
};