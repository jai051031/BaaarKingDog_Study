#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string a, b;
        bool check = false;
        int arr1[26] = {0}, arr2[26] = {0};
        cin >> a >> b;
        for(int j=0; j<a.length(); j++){
            arr1[a[j]-97]++;
            arr2[b[j]-97]++;
        }
        for(int j=0; j<26; j++){
            if(arr1[j] != arr2[j]){
                cout << "Impossible\n";
                check = true;
                break;
            }
        }
        if(check == false){
            cout << "Possible\n";
        }
    }
}
