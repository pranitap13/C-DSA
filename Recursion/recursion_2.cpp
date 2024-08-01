#include<bits/stdc++.h>
using namespace std;

//print a name N times:

void printName(int i, int n){
    /*The function printName takes two arguments: i (current count) and n (total number of times to print). 
It prints "Pranita" and recursively calls itself, increasing the counter i each time until it exceeds n.*/

    if(i > n) return; /*Base Case: if (i > n) return; stops the recursion when i exceeds n.
     This ensures that "Pranita" is printed exactly n times.*/

    cout << "Pranita" << endl;

    printName(i+1, n); //progresses the recursion by incrementing i
}

//print numbers from 1 to N

void printNumber(int i, int num){

    if(i > num) return;
    cout << i << endl;
    printNumber(i+1, num);
}

//print N - 1

void printReverseOrder(int i, int n){

    if(i < 1) return;// Base case: stop recursion when i < 1
    cout << i << endl; // Print the current value of i
    printReverseOrder(i-1, n); // Recursive call with i decreased by 1
}


int main(){
       int n; //no. of times to print name
       cout << "Enter number of times to print: " << endl;
       cin >> n;
      // printName(1,n); //change of global parameter
       //printNumber(1, n);
       printReverseOrder(n,n);// Start the recursion with i = n
       /*First Parameter (n): This is the starting point of the countdown. 
       It represents the current number to be printed and is decremented with each recursive call.*/
       /* Although the function currently doesn't use this parameter,
        it is often useful for recursive functions to keep track of the original input or to manage additional logic as needed.*/
       return 0;

}


