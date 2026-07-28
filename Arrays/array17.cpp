//best time to buy and sell stock;
#include <bits/stdc++.h>
using namespace std;
void bestime(int arr[], int n) {
    int mini = arr[0];
    int profit = 0;
    for(int i=1; i<n;i++) {
        int cost = arr[i] - mini;
        profit = max(profit,cost);
    mini = min(mini,arr[i]);
    }
    cout<<profit;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++) {
        cin>>arr[i];
    }
    bestime(arr,n);
}