
#include<bits/stdc++.h>
using namespace std;
//global declartion
 int hashh[10000000];
int main(){
    //total number of elements in an array
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        //elements of array
               cin >> arr[i];
    }

    //precompute:
    for(int i=0;i<n;i++){
        hashh[arr[i]] +=1;
    }

//query
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        //fetch
        cout << hashh[number]<<endl;
    }
   
    return 0;
}