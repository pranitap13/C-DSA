#include<bits/stdc++.h>
using namespace std;

//print numbers using backtracking 
/*This program has a time complexity of O(n) because it makes n+1 recursive calls.
 The space complexity is also O(n) due to the recursive call stack.*/
void printNum(int i, int n){

    if(i < 1) return;
    printNum(i-1, n);//The function calls itself with the argument i-1. This means it will decrement the value of i by 1 in each recursive call.
   /*Parameter n: Here, n serves as the stopping condition to control the countdown.
    Parameter i: i manages the current number being printed, incrementing up to n.*/
    cout << i << " ";//After all recursive calls have returned (unwinding the recursion), it prints the current value of i
}

//print N to 1

void printReverse(int i, int n){

    // Base case: stop recursion when i is greater than n
    /*The base case is set to stop recursion when i exceeds n. 
    This effectively ensures the recursive calls cover all numbers from N down to 1*/
    if (i > n) return;

    // Print the current number
    /*The statement n - i + 1 calculates the number to print in descending order.*/
    cout << n - i + 1 << " ";

    // Recursive call
    printReverse(i + 1, n);
   
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    printNum(n,n);
    cout << endl;
    printReverse(1, n);
    return 0;
}