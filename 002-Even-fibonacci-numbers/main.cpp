#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, vector<int>> sum_even_fibonnaci(int limit) {
    int a = 0, b = 1;
    int next;
    int sum = 0;
    vector<int> numbers;

    while (a < limit) {
        next = a;
        a = b;
        b = next + b;
        if (a % 2 == 0) {
            sum += a;
            numbers.push_back(a);
        }
    }
    return { sum, numbers };
}

int main () {
    auto results = sum_even_fibonnaci(4000000);
    int fib_sum = results.first;
    vector<int> fib_array = results.second;

    cout << "The sum is " << fib_sum << endl;

    cout << "Even numbers are: ";
    for(int num : fib_array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}