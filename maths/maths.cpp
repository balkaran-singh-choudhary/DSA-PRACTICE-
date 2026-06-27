#include <bits/stdc++.h>
using namespace std;
void countdigits( int n) {
    int count = 0;
    while(n>0){
    int digit = n % 10;
    n = n/10;
    count += 1;
    }
    cout<<count<<endl;
}
void revnumber (int n){
    int rev = 0;
    while(n>0) {
        int digit = n%10;
        n = n/10;
         rev = (rev * 10) + digit;
    }
    cout<<rev<<endl;
}
void palindrome (int n){
    int rev = 0;
    int temp = n;
    while(n>0) {
        int digit = n%10;
        n = n/10;
         rev = (rev * 10) + digit;
    }
    if ( rev==temp) {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}
void armstrong (int n){
    int sum = 0;
    int temp = n;
    while(n>0){
        int digit = n%10;
        n = n/10;
        sum = digit*digit*digit + sum;
    }
    if ( temp == sum) {
        cout<<"Armstrong"<<endl;
    }
    else {
        cout<<"Not Armstrong"<<endl;
    }

    
}
int main(){
    int n;
    cin>>n;
    armstrong(n);
    return 0;

}
