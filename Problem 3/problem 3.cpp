#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> prime_factors;
    long long int n = 600851475143; // The number to factorize

    // Loop from 2 to n / 2
    for (long long int i = 2; i <= n / 2; ++i) {
        // Keep dividing n by i until it is no longer divisible
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }

    // If n is greater than 1 at this point, it means it is prime
    if (n > 1) {
        prime_factors.push_back(n);
    }

    auto largest_prime_factor = max_element(prime_factors.begin(), prime_factors.end());

    cout << "The largest prime factor is: " << *largest_prime_factor << endl;

    return 0;
}
