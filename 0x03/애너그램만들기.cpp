#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a, b;
    int arr1[26] = {0}, arr2[26] = {0}, cnt = 0;
    cin >> a >> b;
    for(int i=0; i<a.length(); i++){
        arr1[a[i]-97]++;
    }
    for(int i=0; i<b.length(); i++){
        arr2[b[i]-97]++;
    }
    for(int i=0; i<26; i++){
        while(arr1[i] > 0 && arr2[i] > 0){
            cnt++;
            arr1[i]--;
            arr2[i]--;
        }
    }
    int result1 = a.length();
    int result2 = b.length();
    cout << result1 - cnt + result2 - cnt;
}
