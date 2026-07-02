//finding lowest and highesht frequency element in an array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++) {
        cin>>arr[i];
    }
    int hash[100] = {0};
    for(int i = 0 ; i<n; i++) {
        hash[arr[i]]++;
    }
    int highestFreq = 0;
    int lowestFreq = INT_MAX;
    int highestElement = -1;
    int lowestElement = -1;
    for(int i = 0 ; i<100 ; i++) {
        if(hash[i]>0){
            if(hash[i]>highestFreq){
                highestFreq = hash[i];
                highestElement = i;
            }
            if(hash[i]<lowestFreq){
                lowestFreq = hash[i];
                lowestElement = i;
            }
        }
    }
    cout<<"Highest Element: "<<highestElement<<endl;
    cout<<"Highest Frequency: "<<highestFreq<<endl;
    cout<<"Lowest Element: "<<lowestElement<<endl;
    cout<<"Lowest Frequency: "<<lowestFreq<<endl;
    

}