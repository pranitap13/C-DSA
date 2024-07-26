#include<bits/stdc++.h>
using namespace std;

class Solution{
    public://Defines a class named Solution that contains the public member function isPalindrome.
bool isPalindrome(int x){
    if(x < 0) return false;/*If x is negative, it cannot be a palindrome because it would have
 a - sign at the front that doesn't match any digits at the back when reversed.*/

    if(x > 0 && x < 10) return true;/*If x is between 0 and 9, it is a palindrome by definition because a 
    single digit reads the same forwards and backwards.*/

    int original = x;/*This variable stores the original value of.We need this to compare against 
    the reversed number later.*/

    int reverseDigit = 0; //This variable will be used to construct the reversed version of x. It starts at 0.

    while(x > 0){

        int lastDigit = x % 10; //Extract the last digit of x using the modulus operator (%). 

        //Before multiplying reversed by 10 and adding lastDigit, check if this operation would cause an integer overflow.
        if(reverseDigit > (INT_MAX - lastDigit) / 10){
            return false;
        }
    /*if (reversed > (INT_MAX - lastDigit) / 10): This condition checks if multiplying reversed by 10 and adding 
    lastDigit would exceed INT_MAX (the maximum value for an integer in C++). The expression (INT_MAX - lastDigit) / 10
    ensures that the next operation is within the safe range of integers.
    If overflow would occur, return false, as the number is too large to be handled correctly by our logic.*/

        reverseDigit = (reverseDigit * 10) + lastDigit;//Add the last digit to the reversed number.

        x = x / 10; //Use integer division (/=) to drop the last digit from x.
    }
    // Determine if the original number is a palindrome.
    return original == reverseDigit; //we took original variable instead of x because x value keeps changing in the program 
    // and becomes 0 so we store the original value of x in original variable.
}
};

int main(){
    Solution solution;
    int num;
    cout << "Enter a number to check:";
    cin >> num;

    if(solution.isPalindrome(num)){
        cout<< "True" <<endl;
        cout << "The given number is a palindrome";
    }
    else{
        cout << "False" <<endl;
        cout << "The number is not a palindrome";
    }

    return 0;

}