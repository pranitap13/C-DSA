#include<bits/stdc++.h>
using namespace std;

int main(){
 
 string str;
 cin >> str; //enter string

 //precompute

 int hash[26] = {0}; //since there are 26 letters, for assuming both capital and small letter take 256
 for(int i=0; i<str.size();i++){
    hash[str[i] - 'a']++; /* str[i] - 'a': This expression calculates the index of the character str[i] in the array.
     For example, if str[i] is 'b', then str[i] - 'a' equals 1, so it maps 'b' to index 1*/

     /*hash[str[i] - 'a']++: Increments the count of the letter at the calculated index. For example, if the string 
     is "hello", 
     after processing, the hash array will have hash[7] = 1, hash[4] = 1, hash[11] = 2, and hash[14] = 1.*/
 }

 int q; //This variable stores the number of queries the user wants to execute.
 cin >> q; // Reads the number of queries.
 while(q--){ //This loop runs q times. Each iteration processes one query.
    char c; //This variable stores the letter for which the frequency is being queried.
    cin >> c; //Reads the character input from the user.

    //fetch
    cout << hash[c - 'a'] << endl; //Outputs the frequency of the queried character c by accessing the corresponding index in the hash array.
 }

    return 0;
}

//or

/*// Precompute
int hash[52] = {0}; // 26 for lowercase + 26 for uppercase
for(int i = 0; i < str.size(); i++){
    if(islower(str[i])) {
        hash[str[i] - 'a']++; // Lowercase letters ('a' to 'z')
    } else if(isupper(str[i])) {
        hash[str[i] - 'A' + 26]++; // Uppercase letters ('A' to 'Z')
    }
} 

  // Fetch
    if(islower(c)) {
        cout << hash[c - 'a'] << endl;
    } else if(isupper(c)) {
        cout << hash[c - 'A' + 26] << endl;
    }*/

