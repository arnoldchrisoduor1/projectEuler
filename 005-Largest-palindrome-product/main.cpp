#include <iostream>
#include <algorithm>

using namespace std;

bool is_palindrome(int n) {
    string num_str = to_string(n);

    string reversed_str = num_str;
    reverse(reversed_str.begin(), reversed_str.end());

    return num_str == reversed_str;
}

int largest_palindrome_product() {

    int largest_palindrome = 0;

    for(int i = 100; i < 1000; i++) {
        for(int y = 100; y < 1000; y++) {
            int z = i * y;
            if(is_palindrome(z) && z > largest_palindrome) {
                largest_palindrome = z;
            }
        }
    }
    return largest_palindrome;
}

int main() {

    int result = largest_palindrome_product();

    cout << "The largest palindrome is: " << result << endl;

    return 0;
}