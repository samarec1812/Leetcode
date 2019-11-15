//https://leetcode.com/problems/course-schedule
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
bool DFS(vector<int>& visit, vector<vector<int>>& graph, int i);

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> graph(numCourses, vector<int>(0));
    vector<int>visit(numCourses, 0);
    for(auto a: prerequisites){
        graph[a[1]].push_back(a[0]);
    }
    for(int i = 0; i < numCourses; ++i){
        if(!DFS(visit, graph, i)) return false;
    }
    return true;
}
bool DFS(vector<int>& visit, vector<vector<int>>& graph, int i){
    if(visit[i] == -1) return false;
    if(visit[i] == 1) return true;
    visit[i] = -1;
    for(auto a: graph[i]){
        if(!DFS(visit, graph, a)) return false;

    }
    visit[i] = 1;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a = {{1,0}};
    bool f = canFinish(n, a);
     cout << f << endl;
    return 0;
}