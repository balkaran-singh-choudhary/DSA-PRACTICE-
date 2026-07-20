//sorting of array with 0's,1's,2's
#include <bits/stdc++.h>
#include <vector>
using namespace std;
    void sortArray(vector<int> & arr){
        int n=arr.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high) {
            if(arr[mid] == 0){
                swap(arr[low],arr[mid]);
                mid++;
                low++;
            }
            else if(arr[mid] == 1) {
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }

        }
    }
    int main() {
        int n;
        cin>>n;
    vector<int> arr(n);
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    sortArray(arr);
    for(int i = 0 ; i<n; i++) {
        cout<<arr[i];
    }
}

