#include <bits/stdc++.h>
using namespace std;

//count number of subsequence generated

int printF(int ind, int arr[], int s, int sum, int n) {

   //condition not satisfied
   //strictly done when array contains positives only

    if(s > sum) return 0;
    if (ind == n) {
        //condition satisfied
        if (s == sum) return 1;

        //condition not satisfied
        return 0;
    }
  
    s += arr[ind];          

    int l = printF(ind + 1, arr, s, sum, n);
   
    s -= arr[ind];  

    int r = printF(ind + 1, arr, s, sum, n);
        
    return l + r;  
}

int main() {
    int arr[] = {1, 2, 1};  
    int n = 3;             
    int sum = 2;          
      
  cout << printF(0, arr, 0, sum, n);  

    return 0;
}
