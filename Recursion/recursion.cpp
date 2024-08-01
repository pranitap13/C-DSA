#include<bits/stdc++.h>
using namespace std;
/*Time Complexity: O(N)
Space Complexity: O(N)*/

int cnt = 0;
void print(){
        if(cnt == 3) return;
        cout << cnt <<" ";
        cnt++;
        print();
}
/*If you declare the variable int cnt inside the print function, it will create a local variable with 
automatic storage duration. This means that each time the print function is called, a new instance of cnt will be 
created, initialized, and destroyed upon exiting the function. As a result, cnt will always be initialized to zero at
 the start of each function call,
 causing the recursion to never progress beyond the initial check, leading to infinite recursion.*/

int main(){
    print();
    return 0;
}

/*Initialization: Each time print() is called, cnt is initialized to 0.
 This occurs because cnt is declared within the function and thus has automatic storage duration, which initializes it every time the function is invoked.

Infinite Recursion: Since cnt is reset to 0 each time print() is called, the condition if (cnt == 3) will never be true. 
The function will repeatedly call itself, leading to infinite recursion.

Output: The program will continually print 0 until it crashes due to a stack overflow caused by the infinite recursion.*/