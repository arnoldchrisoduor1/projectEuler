#include <iostream>

using namespace std;

int sum_square_difference(int n) {
    int sum1 = 0, sum2 = 0;

    // finding the sum of the squares.
    for(int i = 0; i < n; i++) {
        sum1 += (i * i);
    }
    
    // finding the squares of the sum
    for(int i = 0; i < n; i++) {
        sum2 += i;
    }
    sum2 = (sum2 * sum2);

    cout << "The sum of the squares " << sum1 << endl;
    cout << "The square of the sum" << sum2 << endl;

    int difference = sum2 - sum1;

    return difference;
}

int main() {

    int result = sum_square_difference(100);

    cout << "The difference is: " << result << endl;

    return 0;
}