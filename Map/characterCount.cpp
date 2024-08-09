#include <bits/stdc++.h>
using namespace std;

//Time Complexity: Average & Best case: O(1)
//Worst Case(rare): O(N)

//unordered map doesn't take datatypes like pair, vector etc. ordered map accepts all datatypes.

int main() {
    // Read the number of characters
    int n;
    cin >> n;
    
    // Declare an array to hold characters
    char arr[n];
    
    // Input the characters into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute: count frequencies of each character
    unordered_map<char, int> mpp; //it doesn't store elements in sorted order but it has less/best TC in average & best case so we should prefer this
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Print frequencies
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Read number of queries
    int q;
    cin >> q;

    // Process each query
    while (q--) {
        char character;
        cin >> character;

        // Fetch and print the frequency of the queried character
        cout << mpp[character] << endl;
    }

    return 0;
}
