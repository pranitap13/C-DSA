// to sort vectors & arrays without using sorting algorithms
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){ //instead of taking array or vector take pairs
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if this two conditions didn't satisfy which means that both are equal then:

    if(p1.first > p2.first) return true;
    return false;
}


void explainSorting(){
    int a[] = {5,3,1,4,1};
    int n = sizeof(a) / sizeof(a[0]); /*here sizeof(a): gives the total number od bytes occupied by entire array
    & sizeof(a[0]): gives the number of bytes occupied by single element of the array
    Dividing the total number of bytes by the size of one element yields the number of elements in the array.*/
   sort(a, a + n);  
   
   // if number of elements are known:
   sort(a+3, a+5); //it will sort last two elements of an array

   //to sort the elements in descending order:

   sort(a, a+n, greater<int>());/*The greater<int>() functor tells the sort algorithm 
   to arrange the elements in descending order by using the greater-than operator (>) for comparisons.*/

   pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
   //sort it according to second element
   //if second element is same then sort it according to first element but in descending order

   sort(a, a+n, comp);
   //o/p: {{4,1}, {2,1}, {1,2}}

       //to get the largest element in an array:
     int maxi = *max_element(a, a+n); //from first element to last element of an array

}

void extra(){
    int num = 7;
    int cnt = __builtin_popcount(num); //it counts the number of set bits (1s) in an integer.
    //For num = 7, which is 111 in binary, the function will return 3 because there are three 1s.

    //for long long integer value
    long long num = 18739747229;
     int cnt = __builtin_popcountll(num);

     //to print all the permutations of a string:

     string s = "123";
     sort(s.begin() , s.end());
     // always do the permutation for sorted order of string

     do{
        cout << s << endl; //print current permutation
     } while (next_permutation(s.begin(), s.end())); //generates next permutation
     //Reset to First Permutation: 123 (and next_permutation returns false) and the while loop stops iterating
     //next_permutation function from the C++ Standard Library to iterate through all possible permutations of a sequence. 
    
     

}



int main(){
    return 0;
}