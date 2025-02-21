#include <iostream>

int main() {
    int sum = 0;

    for(int x = 0; x < 1000; x++) {
        if (x % 3 == 0 || x % 5 == 0) {
            sum += x;
        }
    }

    // simple test
    if (sum == 233168) {
        std::cout << "The answer is correct " << sum << std::endl;
    } else {
        std::cout << "Wrong answer " << sum << std::endl;
    }

    return 0;
}