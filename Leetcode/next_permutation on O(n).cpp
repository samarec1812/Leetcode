//https://leetcode.com/problems/next-permutation
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


    void nextPermutation(vector<int>& nums, int n) {
        int i, j;
        for(int i =n -2; i >=0; --i){
            if(nums[i+1] > nums[i]){
                for(j = n-1; j > i; --j){
                    if(nums[j] > nums[i]) break;
                }
                swap(nums[i], nums[j]);
                reverse(nums.begin()+i+1, nums.end());
                return;
            }
        }
        reverse(nums.begin(), nums.end());
    }
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool f1 = true;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
   nextPermutation(a,n);
    
    for(auto w:a){
        cout << w << " ";
    }
    return 0;
}