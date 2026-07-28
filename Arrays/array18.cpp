#include <bits/stdc++.h>
using namespace std;
vector <int> generateRow (int row) {
    vector <int> ans;
    int res = 1;
    ans.push_back(res);
    for(int col = 1; col < row;col++) {
        res = res * (row - col);
        res = res/col;
        ans.push_back(res); 
    }
    return ans;

}
int main() {
    int n;
    cin>>n;
    for(int row = 1; row <= n ; row++) {
        vector <int> ans = generateRow(row);
            for(int x:ans) {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
