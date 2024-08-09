/*#include <unordered_set>
#include <vector>
#include<iostream>*/
#include<bits/stdc++.h>

using namespace std;

/*Time Complexity: O(n + m), where n is the size of arr1 and m is the size of arr2.
 Each insertion operation in the unordered_set is O(1) on average.

Auxiliary Space: O(n + m) due to the storage requirements of the unordered_set.*/

class Solution {
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // Create an unordered_set to store distinct elements
        unordered_set<int> uniqueElements;
        
        // Insert elements from the first array
        for (int num : arr1) {
            uniqueElements.insert(num);
        }
        
        // Insert elements from the second array
        for (int num : arr2) {
            uniqueElements.insert(num);
        }
        
        // The size of the unordered_set represents the number of distinct elements
        return uniqueElements.size();
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3};
    cout << "Number of distinct elements in union: " << sol.doUnion(arr1, arr2) << endl; // Output: 5

    // Test case 2
    vector<int> arr1b = {85, 25, 1, 32, 54, 6};
    vector<int> arr2b = {85, 2};
    cout << "Number of distinct elements in union: " << sol.doUnion(arr1b, arr2b) << endl; // Output: 7

    // Test case 3
    vector<int> arr1c = {1, 2, 1, 1, 2};
    vector<int> arr2c = {2, 2, 1, 2, 1};
    cout << "Number of distinct elements in union: " << sol.doUnion(arr1c, arr2c) << endl; // Output: 2

    return 0;
}