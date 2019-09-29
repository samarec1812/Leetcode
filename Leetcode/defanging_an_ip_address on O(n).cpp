//https://leetcode.com/problems/defanging-an-ip-address
class Solution {
public:
  string defangIPaddr(string &address) {
     string k;

    for(int i =0; i < address.size(); i++){

        if(address[i] == '.') {
       k.push_back('[');
            k.push_back('.');
            k.push_back(']');
        }
        else k.push_back(address[i]);
    }
        return k;

}
};