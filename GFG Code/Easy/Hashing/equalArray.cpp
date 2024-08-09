#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool check(vector<int> &arr1, vector<int> &arr2){
         
         if(arr1.size() != arr2.size()){
            return false;
         }
           
           unordered_map<int,int> countMap1;
           unordered_map<int,int> countMap2;

           /*int num: For each iteration, num will be assigned the value of the current element from arr1.
countMap1[num]++: This line increments the count of num in the countMap1 unordered map. If num is already in the map, its count is incremented by 1.
 If num is not in the map, it is added with a count of 1.*/

         for(int num : arr1){
             countMap1[num]++;
         }

         /*For each element in arr1, num stores its value.
The expression countMap1[num]++ increments the count of the element num in the countMap1 unordered map.
If num is already a key in countMap1, its value is incremented by 1. If num is not yet a key, it is added to the map with a value of 1.*/

         for(int num: arr2){
            countMap2[num]++;
         }

         return countMap1 == countMap2;
    }
};

/*Two arrays are considered equal if:

They contain exactly the same elements.
The frequency (count) of each element is the same in both arrays.
In other words, both arrays must have the same set of elements, regardless of order, and each element must appear the same number of times in both arrays.*/
int main(){
    Solution sol;
    
    /*arr1 contains 1 and 4, which are not present in arr2.
arr2 contains 9 and 7, which are not present in arr1.
Since the sets of elements in arr1 and arr2 are not identical, the arrays are not equal, leading the check function to return false.*/
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,5,3,9,7};

    cout << "Test Case 1 " << (sol.check(arr1,arr2)? "true" : "false") << endl;//Output:false

     vector<int> arr1b = {1, 2, 5};
    vector<int> arr2b = {2, 4, 15};
    cout << "Test case 2: " << (sol.check(arr1b, arr2b) ? "true" : "false") << endl; // Output: false

    // Test case 3
    vector<int> arr1c = {3, 3, 3};
    vector<int> arr2c = {3, 3, 3};
    cout << "Test case 3: " << (sol.check(arr1c, arr2c) ? "true" : "false") << endl; // Output: true

    // Test case 4
    vector<int> arr1d = {4, 5, 6, 7, 8};
    vector<int> arr2d = {8, 7, 6, 5, 4};
    cout << "Test case 4: " << (sol.check(arr1d, arr2d) ? "true" : "false") << endl; // Output: true

    // Test case 5 (different sizes)
    vector<int> arr1e = {1, 2, 3, 4};
    vector<int> arr2e = {1, 2, 3};
    cout << "Test case 5: " << (sol.check(arr1e, arr2e) ? "true" : "false") << endl; // Output: false

    return 0;
}