#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>  // For sorting

using namespace std;

// Function to check if a number is prime
bool is_prime(long long num) {
    if (num < 2) {
        return false;
    }
    for (long long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find prime factors
vector<long long> prime_factors(long long n) {
    vector<long long> factors;

    // Checking for factor 2 separately
    while (n % 2 == 0) {
        cout << "Checking for primeness... " << 2 << endl;
        factors.push_back(2);
        n /= 2;
    }

    // Checking for odd factors
    for (long long i = 3; i <= sqrt(n); i += 2) {
        cout << ".... Checking.... " << i << endl;
        while (n % i == 0) {
            cout << "Checking for primeness... " << i << endl;
            if (is_prime(i)) {
                cout << "========== Found prime ===== " << i << endl;
                factors.push_back(i);
            }
            n /= i;
        }
    }

    // If n is still greater than 2, it is a prime factor
    if (n > 2) {
        cout << "========== Found prime ===== " << n << endl;
        factors.push_back(n);
    }

    return factors;
}

int main() {
    long long number = 600851475143; // Large number
    vector<long long> primes = prime_factors(number);

    // Print all prime factors
    cout << "Prime factors: ";
    for (long long num : primes) {
        cout << num << " ";
    }
    cout << endl;

    // Print the largest prime factor
    if (!primes.empty()) {
        cout << "Largest prime factor: " << *max_element(primes.begin(), primes.end()) << endl;
    }

    return 0;
}
