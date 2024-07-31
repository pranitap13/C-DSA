//multiple recursion call
//predict the number of fibonacci series:

#include<bits/stdc++.h>
using namespace std;

int printFib(int n){

    if(n <= 1) return n;

    int lastDigit = printFib(n-1);
    int secondLastDigit = printFib(n-2);
    return lastDigit + secondLastDigit;
}

int main(){
    int num;
    cout << "Enter a integer number: ";
    cin >> num;
    cout << printFib(num);
    return 0;
}