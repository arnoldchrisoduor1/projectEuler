#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_prime(long long n) {
    if(n < 2) {
        return false;
    }
    for(long long i = 2; i <= sqrt(n); i++) {
        if(n % i == 0 ) {
            return false;
        }
    }
    return true;
}

vector<int> all_primes(int nums) {
    int count = 0, n = 1;
    vector<int> values;
    while(count < nums) {
        if (is_prime(n)) {
            cout << "Found prime" << n << endl;
            values.push_back(n);
            count++;
        }
        n++;
    }
    return values;
}

int main() {
    vector<int> result = all_primes(13);
    cout << "Values: " ;
        for(int n: result) {
            cout << n << " ";
        }
    cout << endl;
    
    return 0;
}