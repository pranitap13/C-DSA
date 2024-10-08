#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n){
  //to reduce the time complexity:
  //O(sqrt(n))
  //Instead of iterating through all numbers from 1 to n, the loop runs up to n

  vector<int> ls;
  for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
  
     //easy method but has greater time complexity:
     //O(n)
    /*for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i <<" ";
        }
    }*/
}

int main(){
    int num;
    cout<< "Enter an integer number: ";
    cin >> num;
    printDivisor(num);
    return 0;
}