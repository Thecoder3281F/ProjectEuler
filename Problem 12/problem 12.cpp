#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countDivisors(int number) {
    // Find the prime factorization of the number
    map<int, int> primeFactors;
    int factor = 2;
    while (number > 1) {
        while (number % factor == 0) {
            primeFactors[factor]++;
            number /= factor;
        }
        factor++;
    }

    // Count the number of divisors
    int divisors = 1;
    for (const auto& [prime, exponent] : primeFactors) {
        divisors *= exponent + 1;
    }

    return divisors;
}

int main() {
    long long n = 1;

    while (true) {
        long long tn = n * (n + 1) / 2;
        if (countDivisors(tn) > 500) {
            cout << tn << endl;
            break;
        }

        n++;
    }

    return 0;
}
