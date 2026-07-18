//Two sum 
#include <bits/stdc++.h>
using namespace std;
void  istarget(int arr[] , int n, int t ) {
    sort(arr,arr+n);
    int left = 0;
    int right = n - 1;
    
    while(left<right) {
        int sum = arr[left] + arr[right];
        if(sum == t) {
            cout<<"YES";
            return;
        }
        else if(sum<t) {
            left++;
        }
        else right--;
    }
    cout<<"NO";
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int t;
    cin>>t;
    istarget(arr,n,t) ;
    
}