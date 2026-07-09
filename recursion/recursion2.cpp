#include <bits/stdc++.h>
using namespace std;
//sum
int  sum(int n){
    if ( n == 0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }

}
//factorial
int factorial(int n){
    if ( n <=1){
        return 1;
    }
    else{
        return n *  factorial(n-1);
    }

}
int main () {
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

}