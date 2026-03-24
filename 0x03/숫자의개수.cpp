#include<iostream>
using namespace std;
int main(){
    int arr[10] = {0};
    int a, b, c;
    cin >> a >> b >> c;
    int num = a * b * c;
    while(num > 0){
        arr[num%10]++;
        num /= 10;
    }
    for(int i=0; i<10; i++){
        cout << arr[i] << "\n";
    }
}
