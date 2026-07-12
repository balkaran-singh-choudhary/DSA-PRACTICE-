//union of two sorted array
#include <iostream>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n1 && j < n2) {
        if (nums1[i] <= nums2[j]) {
            if (ans.size() == 0 || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
        } else {
            if (ans.size() == 0 || ans.back() != nums2[j])
                ans.push_back(nums2[j]);
            j++;
        }
    }

    while (i < n1) {
        if (ans.size() == 0 || ans.back() != nums1[i])
            ans.push_back(nums1[i]);
        i++;
    }

    while (j < n2) {
        if (ans.size() == 0 || ans.back() != nums2[j])
            ans.push_back(nums2[j]);
        j++;
    }

    return ans;
}

int main() {
    int n1, n2;

    cin >> n1;
    vector<int> nums1(n1);
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cin >> n2;
    vector<int> nums2(n2);
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    vector<int> ans = unionArray(nums1, nums2);

    for (int x : ans)
        cout << x << " ";

    return 0;
}