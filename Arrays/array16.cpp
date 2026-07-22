//maximum subarray sum
#include <bits/stdc++.h>
using namespace std;
void maximumSubarraysum(int arr[], int n) {
    int sum  = 0;
    int start = 0;
    int arrstart = -1;
    int arrend = -1;
    
    int maxi = INT_MIN;
    for(int i = 0;i<n ; i++) {
        if(sum==0) {
            start = i;
        }
        sum +=arr[i];

    if(sum < 0) {
        sum = 0;
    }
    if(sum>maxi) {
        arrstart = start ;
        arrend = i;
        maxi = sum;
    }
    }
    cout<<maxi;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++) {
        cin>>arr[i];
    }
    maximumSubarraysum(arr,n);
}