#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n){
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printPattern2(int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<=i ;j++){
            cout << "*";
        }
        cout << endl;
    }
}
   void printPattern3(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
   }

   void printPattern4(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
   }
    void printPattern5(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "*" ;
        }
        cout << endl;
    }
   }
   void printPattern6(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " " ;
        }
        cout << endl;
    }
   }
int main(){
    int n;
    cout << "Enter how many patterns you have to print: ";
    cin >> n;
    //printPattern1(n);
   //printPattern2(n);
     //printPattern3(n);
     //printPattern4(n);
          //printPattern5(n);
    printPattern6(n);
    return 0;
}