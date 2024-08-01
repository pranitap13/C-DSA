#include<bits/stdc++.h>
using namespace std;


int main(){
  /*vector<int> v (5,10) ;
    vector<int> :: iterator it = v.begin();
     v.erase(v.begin() +1);
    cout << *(it) << " ";
    for(auto it = v.begin(); it!= v.end(); it++){
        cout << *(it)<< " ";
    }*/

    vector <int> v{1,2,3,4,5,6};
  
    

    for(auto i= v.begin(); i != v.end(); i++){
        cout << *i << " ";
     
    }
    /* cout cannot directly print a vector. 
    You need to iterate over the 
    elements of the vector to print them*/
 
       return 0;
}