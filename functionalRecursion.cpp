#include<bits/stdc++.h>
using namespace std;

//reverse an array
 void usingTwoPointer(int i, int arr[], int n){
      if(i >= n/2) return;/*The function stops calling itself when i reaches or exceeds half the length of the array (n/2). 
      This is because, by then, all the necessary elements will have been swapped, and the array will be reversed.*/
     swap(arr[i], arr[n-i-1]); //This line swaps the element at the current index i with the element at the mirrored index n-i-1.
     //arr[i]: This refers to the element at the current index i from the start of the array.
     //arr[n - i - 1]: This calculates the index from the end of the array.
     /*n is the total number of elements in the array.
Subtracting i moves the index i steps backward from the end of the array.
Subtracting 1 accounts for zero-based indexing, meaning arr[n - i - 1] points to the corresponding element from the end that should be swapped with arr[i].*/
     
     usingTwoPointer(i+1, arr, n);//This recursive call advances the pointer i by 1 and repeats the swap operation for the next pair of elements until the base case is met.
 }

//program to find string is palindrome or not:

  bool checkPalindrome(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i]!= s[s.size()-i-1]) return false;
    return checkPalindrome(i+1, s);
  }

int main(){
    string s;
    cout << "Enter a String:";
    cin >> s;
    /*int n;
    cout << "Enter an array:";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    /*The function usingTwoPointer is called with initial arguments i = 0, the array arr, and its size n.
    This function will reverse the array in place using the two-pointer technique.*/
   // usingTwoPointer(0, arr, n);
   // for(int i =0; i<n; i++) cout << arr[i] << " ";
    
    cout << checkPalindrome(0,s); 
    
    return 0;
}