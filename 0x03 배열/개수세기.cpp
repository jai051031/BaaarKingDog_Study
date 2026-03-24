#include<iostream>
using namespace std;
int main(){
    int n, m, a[100], cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0; i<n; i++){
        if(a[i] == m)
            cnt++;
    }
    cout << cnt;
}
