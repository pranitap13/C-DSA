#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        if (ds.size() == 0) {
            cout << "{}";  // Print empty subsequence
        } else {
            for (auto it : ds) {
                cout << it << " ";
            }
        }
        cout << endl;
        return;
    }

    // Take or put the particular index in the subsequence
    ds.push_back(arr[ind]);
    printSubsequences(ind + 1, ds, arr, n);
    ds.pop_back();

    // Not pick or not take condition, this element is not added in subsequence
    printSubsequences(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printSubsequences(0, ds, arr, n);
    return 0;
}
