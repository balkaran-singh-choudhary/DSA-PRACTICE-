//missing element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n-1];

    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    int xorr1 = 0;
    int xorr2 = 0;
    for(int i = 0; i<n-1; i++) {
        xorr2 = xorr2 ^ arr[i];
        xorr1 = xorr1 ^ (i+1);

    }
    xorr1 = xorr1 ^ n;
    cout<<(xorr1 ^ xorr2);
}