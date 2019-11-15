//https://leetcode.com/problems/find-the-town-judge
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findJudge(int N, vector<vector<int>>& trust) {
if(trust.empty()) return N == 1 ? 1 : -1;
vector<int>count_t(N+1);
for(auto t: trust){
    count_t[t[1]]++;
    count_t[t[0]]--;
}
for(size_t i = 0; i < count_t.size(); i++){
    if(count_t[i] == N -1) return i;
}
return -1;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a = {{1,3}, {2,3}, {3,1}};
    int f = findJudge(n, a);
     cout << f << endl;
    return 0;
}