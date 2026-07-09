//to find second largest number in an array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++) {
        cin>>arr[i];
    }
    int largest = arr[0];
    int secondlargest = INT_MIN;
    for(int i = 0 ; i<n; i++) {
    if(arr[i] > largest) {
        secondlargest = largest;
        largest = arr[i];
    }
      else if ( arr[i] > secondlargest && arr[i]<largest) {
            secondlargest = arr[i];
        }
    }
        cout<<"second largest:"<<secondlargest;
    
} 