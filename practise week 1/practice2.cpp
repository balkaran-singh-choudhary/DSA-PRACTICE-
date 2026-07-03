//highest frequuency element 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++) {
        cin>>arr[i];
    }
    int hash[1000] = {0};
    for( int i =0 ; i<n ; i++) {
        hash[arr[i]]++;
    }
    int highestfreq = 0; 
    int highestelement  = -1;
    for(int i =0 ; i<1000 ; i++){
    if(hash[i]> 0) {
        if(hash[i] > highestfreq){
            highestfreq = hash[i];
            highestelement = i;
            
        }

    }
}
    cout<<"Highest Frequency element:"<<highestfreq<<endl;
}