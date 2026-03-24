#include<iostream>
using namespace std;
int grade[6][2];
int main(){
    int n, m, cnt = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        grade[b-1][a]++;
    }
    for(int i=0; i<6; i++){
        if(grade[i][0] % m == 0)
            cnt += grade[i][0] / m;
        else
            cnt += grade[i][0] / m + 1;
        
        if(grade[i][1] % m == 0)
            cnt += grade[i][1] / m;
        else
            cnt += grade[i][1] / m + 1;
    }
    cout << cnt;
}
