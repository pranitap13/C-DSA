#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[], int s, int sum, int n)
{
    if(ind == n){ // Base case: If we've considered all elements in the array
        if(s==sum){ // Check if the current subset sum equals the target sum
            for(auto it: ds) cout << it << " "; // Print the current subset
            cout << endl;  // Move to the next line after printing the subset
        }
        return;  // Exit the function when base case is met
    }
    ds.push_back(arr[ind]);// Add the current element at index 'ind' to the subset
    s += arr[ind]; // Add the current element's value to the current subset sum

    printF(ind+1, ds, arr, s, sum, n);

   // Backtrack: undo the pick operation
    s -= arr[ind];  // Subtract the current element's value from the subset sum
    /*The value of the current element is subtracted from the subset sum s.
This backtracking step reverts the sum to its previous state before the current element was added.*/
    ds.pop_back();  // Remove the current element from the subset

    //not pick
        printF(ind+1, ds, arr, s, sum, n);
        /*The function calls itself recursively with the index ind incremented by 1.
This recursive path does not include the current element in the subset, allowing exploration of subsets that exclude it.
It uses the same subset and sum as before, just moving to the next element without making changes.*/
}

int main(){

    int arr[] = {1,2,1};
    /*n stores the number of elements in the array, which is 3.
It’s used as a limit in the recursive function to ensure all elements are considered.*/
    int n = 3; //Define the size of the array
    int sum = 2; 
    vector<int> ds;
    printF(0, ds, arr, 0, sum, n); 
    /*0: Starting index of the array to begin subset exploration.
      ds: An empty vector passed by reference to store current subsets.
      arr: The array we're analyzing.
      0: Initial sum of the subset elements, starting at 0.
      sum: The target sum we want to match.
      n: The total number of elements in the array.*/

    return 0;
}