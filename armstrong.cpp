#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
bool isArmstrong(int x){
    int original = x;
    int sum = 0;
    while(x > 0){
        int lastDigit = x % 10;
        sum = sum+ (lastDigit*lastDigit*lastDigit);
        x = x / 10;
    }
    return (original == sum);
}
}; 

int main(){
    Solution solution;
    int num;
    cout << "Enter an integer:";
    cin >> num;

    if(solution.isArmstrong(num)){
        cout << num << " is an Armstrong!" <<endl;
    }
    else{
        cout << num << " is not an Armstrong!" <<endl;
    }
    return 0;
}
