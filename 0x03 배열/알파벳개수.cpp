#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    int a[26] = {0};
    cin >> s;
    for(int i=0; i<s.length(); i++){
        a[s[i]-97]++;
    }
    for(int i=0; i<26; i++){
        cout << a[i] << " ";
    }
}
