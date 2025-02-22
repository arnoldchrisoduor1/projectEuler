#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int smallest_multiple(int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result = lcm(result, i);
    }
    return result;
}

int main() {

    int result = smallest_multiple(10);
    cout << "The lcm is: " << result << endl;

    return 0;
}