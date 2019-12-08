//https://leetcode.com/problems/employee-importance
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int res = 0; 
        queue<int> w{{id}}; 
        unordered_map<int, Employee*> mapa; 
        unordered_set<int> seter; 
        for(auto &e: employees) mapa[e->id] = e; 
        while(!w.empty()){
            auto cur = w.front(); 
            w.pop(); 
            if(seter.count(cur)) continue; 
            seter.insert(cur); 
            res += mapa[cur] ->importance; 
            for(auto c: mapa[cur] -> subordinates){
                w.push(c); 
            }
        }  
        return res; 
    }
};