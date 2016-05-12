#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "314159265358979323846";
    reverse(s.begin(), s.end());
    int i = 0;
    while(i<s.size()){
        cout<<s[i];
        i++;
    }
}
