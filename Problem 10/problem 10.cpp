#include <iostream>

using namespace std;


bool is_prime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    if (n <= 3) return true;  // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false; // multiples of 2 and 3 are not prime

    // check for other divisors up to the square root of n
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


int main() {
    long long sum = 0;
    int n = 0;
    while (n < 2000000) {
        if (is_prime(n)) {
            sum += n;
        }
        n++;
    }

    cout << sum << endl;
}
