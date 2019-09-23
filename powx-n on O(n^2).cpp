//https://leetcode.com/problems/powx-n/
#include <iostream>
#include <algorithm>


using namespace std;
int main() {
int n; double a;
cin >>a >> n;
if(n >= 0) {
    double b = 1, k = n;
    while (k != 0) {
        k -= 1;
        b *= a;
    }
    cout << b << " ";
}
else {
    double b = 1; int k = abs(n);
    while (k != 0) {
        k -= 1;
        b *= a;
    }
    cout << 1.0/b << " ";

}
    return 0;
}
