#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[10] = {0};
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i<s.length(); i++){
        int num = s[i] - '0';
        if(num == 9)
            a[6]++;
        else
            a[num]++;
    }
    a[6] = (a[6]+1) / 2;
    int max = 0;
    for(int i=0; i<9; i++){
        if(max < a[i])
            max = a[i];
    }
    cnt = max;
    cout << cnt;
}
