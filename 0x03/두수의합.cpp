#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m, a[100000];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    sort(a, a+n);
    int p1 = 0, p2 = n-1, cnt = 0;
    while(p1 < p2){
        if(a[p1] + a[p2] == m){
            cnt++;
            p1++;
            p2--;
        }
        else if(a[p1] + a[p2] < m){
            p1++;
        }
        else{
            p2--;
        }
    }
    cout << cnt;
}
