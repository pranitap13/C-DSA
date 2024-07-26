#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a integer: ";
    cin >> n;
    int count = 0;
    for(int i = 1; i<= sqrt(n); i++){
        if(n % i == 0){
            count++;
            if((n/i) != i) count++;
        }
    }
    if(count == 2) cout << "true";
    else cout << "false";
    
}

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Handle the special case for numbers less than 2
    if (n < 2) {
        cout << "false" << endl;
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) { // Start loop from 1
        if (n % i == 0) {
            count++;
            if ((n / i) != i) count++; // Check to avoid counting square roots twice
        }
    }

    if (count == 2) {
        cout << "true" << endl; // Prime number
    } else {
        cout << "false" << endl; // Not a prime number
    }
    
    return 0;
}
*/