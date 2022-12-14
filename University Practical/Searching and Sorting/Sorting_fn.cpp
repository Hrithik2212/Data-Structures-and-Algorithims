#include <iostream>
#include <algorithm>
using namespace :: std ;
bool cmp(int *a, int *b){
    return a<b;
}

int main(){
    int arr[] = { 5 ,2 ,11 ,14 ,3, 7 ,9 ,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,cmp);
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}