//majority element in an array
#include <bits/stdc++.h>
using namespace std;
void majorityElement(int arr[] , int n) {
    int count = 0 ;
    int element;
    for(int i = 0 ;i<n;i++) {
        if(count ==0) {
            count = 1;
            element = arr[i];
        }
        else if(arr[i] == element) {
            count++;
        }
        else{
            count--;
        }
    }
    int count1=0;
    for(int i = 0;i<n;i++) {
        if(arr[i] == element) {
            count1++;
        }
        if(count1 > n/2) {
            cout<<arr[i];
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    majorityElement(arr,n);


}