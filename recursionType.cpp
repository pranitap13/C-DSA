#include<bits/stdc++.h>
using namespace std;
/*Time Complexity: O(N)
Space Complexity: O(N)*/

//program to print sum of n numbers:

void returnParameterized(int i, int sum){
    
    if(i < 1){
        cout << sum << " ";
        return;
    }
    returnParameterized(i-1, sum + i);
}

    int functionalRecursion(int n){

        if(n == 0)return 0;
        
        return n + functionalRecursion(n-1);

}

//program to find factorial:
 
 int fact(int n){

    if(n == 0) return 1;
    return n * fact(n-1);
 }


int main(){
    int n;
    cout << "Enter number:" << " ";
    cin >> n;
    cout << "Factorial of "<< n << " is: " <<fact(n);
    cout<< endl;
    cout <<"Sum of digits is: " <<functionalRecursion(n);//we need to print this because it has a  return type 
    //returnParameterized(n, 0);
    return 0;
}