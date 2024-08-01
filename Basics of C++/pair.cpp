#include<bits/stdc++.h>
using namespace std;


int main(){
 
 pair<int,int> p = {3,4};
 cout << p.first << " "<< p.second;
 cout << endl;

 pair<int, pair<int,int>> p1 = {1, {9, 5}};
 cout<< p1.first << " "<< p1.second.second << " "<< p1.second.first;
 cout<< endl;
 
pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
cout << arr[1].second;


    return 0;
}