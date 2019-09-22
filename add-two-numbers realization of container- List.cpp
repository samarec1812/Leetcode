//https://leetcode.com/problems/add-two-numbers/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <math.h>

using namespace std;


int main(){
    list<int>str1 = {2,4,3};
    list<int>str2 = {5, 6, 4};
    int i = 0, t = 0;
    for(auto w = str1.begin(); w != str1.end(); w++){
        if(i == 0)t += *w;
        if(i > 0 ){
            int s = (*w)*pow(10,i);
            t+=s;}
        ++i;
    }
cout << t + 1 << endl;
    int  f =0, j = 0;
    for( auto  w = str2.begin(); w != str2.end(); w++){
        //int k =*w;
        if(j == 0)f += *w;
        if(j >0 ){
        int s = (*w)*pow(10,j);
        f +=s;}
        ++j;
    }
    cout << f+1 << endl;
    int sum =f+1 +t+1;
    cout << sum << endl;
    list<int>str3;
    while(sum > 0){
        str3.push_back(sum%10);
        sum/=10;
    }
    for(auto w :str3){
        cout << w;
    }

    return 0 ;
}
