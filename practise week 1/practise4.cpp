//to check prime number using root n approach
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count  =0 ;
    int n;
    cin>>n;
    for(int i = 1 ; i*i<=n ; i++){
        if(n % i  == 0){
            count++;
            if( i != n / i) {
                count++;
            }
        }
    }
    if( count == 2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
    
    }
    


