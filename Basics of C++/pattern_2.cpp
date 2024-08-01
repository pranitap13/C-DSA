#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){

for(int i=0; i<n; i++){
    
    //space
    for(int j=0; j<n-i-1; j++){
        cout << " ";
    }

    //star

    for(int j=0; j< 2*i+1; j++){
         cout << "*";
    }

    //space
     for(int j=0; j<n-i-1; j++){
        cout << " ";
    }
       cout<< endl;
}
}

void printPattern1(int n){
for(int i=0; i<n; i++){
    //space
    for(int j=0; j<i; j++){
        cout << " ";
    }
    //star
    for(int j=0; j< 2*n - (2*i+1); j++){
         cout << "*";
    }
    //space
     for(int j=0; j<i; j++){
        cout << " ";
    }
       cout<< endl;
}
}
void printPattern2(int n){
    for(int i=0; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for(int j = 1; j<= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern3(int n){
    int start = 1;
    for(int i =0; i<n; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void printPattern4(int n){
    int space = 2 * (n-1);
    for( int i=1; i<=n; i++){

        //numbers
        for(int j=1; j<=i; j++){
             cout << j;
        }
        //space
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        //numbers
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void printPattern5(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void printPattern6(int n){
    for(int i=0; i<=n; i++ ){
        for(char ch='A'; ch<= 'A'+i; ch++){
            cout << ch << " ";
        }
        cout<< endl ;
    }
}

int main(){
    int n;
    cout << "Enter the number of patterns:";
    cin >> n;
    //printPattern(n);
     //printPattern1(n);
     //to combine both the pyramids:
     //printPattern(n);
     //printPattern1(n);
      //printPattern2(n);
    //printPattern3(n);
    //printPattern4(n);
    //printPattern5(n);
    printPattern6(n);
    return 0;
}