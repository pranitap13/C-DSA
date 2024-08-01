#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long fact = 1;
        int i = 1;
        
        while (fact <= n) {
            result.push_back(fact);
            i++;
            fact *= i; // Compute the next factorial
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    long long n = 6;
    vector<long long> factorials = sol.factorialNumbers(n);
    
    for (long long f : factorials) {
        cout << f << " ";
    }
    
    return 0;
}
