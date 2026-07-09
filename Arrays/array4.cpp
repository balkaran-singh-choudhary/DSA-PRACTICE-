//remove duplicate from a sorted array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++) {
        cin>>arr[i];
    }
    int i = 0;
    for(int j = 1 ; j<n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    int k =  i+1;
    for(int i = 0 ;i<k; i++) {
        cout<<arr[i];
    }
}