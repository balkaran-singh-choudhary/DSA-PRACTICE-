//finding longest sub arrray with  sum k forr positive numbers;
#include <bits/stdc++.h>
using namespace std;
int longestSubarr(int arr[],int n ,long long k) {
    int left = 0;
    int right = 0;
    long long sum = arr[0];
    int maxlen = 0;
    while(right<n) {
        while(left<=right && sum > k) {
            sum -= arr[left];
            left++;

        }
        if(sum==k) {
            maxlen = max(maxlen , right - left + 1);
        }
        right++;
        if(right<n) {
            sum += arr[right];
        }
    }
    return maxlen;

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++) {
        cin>>arr[i];
    }
        long long k;
        cin>>k;
        cout<<longestSubarr(arr,n,k);
    
}