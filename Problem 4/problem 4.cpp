#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ispalindrome(int x) {
    string temp_str = to_string(x);
    string temp_str_2 = temp_str;
    reverse(temp_str_2.begin(), temp_str_2.end());
    if (temp_str == temp_str_2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int product = 0;
    int largest_palindrome = 0;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            product = i * j;

            if (ispalindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    cout << "The largest palindrome is: " << largest_palindrome << endl;

    return 0;
}
