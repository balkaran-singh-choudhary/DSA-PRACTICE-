#include <bits/stdc++.h>
using namespace std;
// code to print name n times 
void printName(int i , int n) {
    if ( i > n) {
        return ;
    }
    cout<<"Balkaran singh"<<endl;
    printName(i+1,n);

}
//code to print numbers from 1 to n
void printNumbers(int i , int n) {
    if ( i > n) {
        return ;
    }
    cout<<i;
    printNumbers(i+1,n);

}
//code to print numbers from n to 1
void printrevNumbers(int i , int n) {
    if ( i<1) {
        return ;
    }
    cout<<i;
    printrevNumbers(i-1,n);

}
//code to print numbers from 1 to n by backtracking
void printnumbers(int i , int n) {
    if ( i<1) {
        return ;
    }
    printnumbers(i-1,n);
    cout<<i;

}
//code to print numbers from n to 1 by backtracking 
void printrevnumbers(int i , int n) {
    if ( i > n) {
        return ;
    }
    printrevnumbers(i+1,n);
    cout<<i;

}
int main() {
    int n;
    cin>>n;
    printrevnumbers(1,n);
    return 0;
}