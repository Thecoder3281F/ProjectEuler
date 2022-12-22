#include <iostream>
using namespace std;
// Function to check if a number is prime
bool is_prime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}

// Function to find the nth prime number
int nth_prime(int n) {
  int count = 0;  // Count of prime numbers
  int i = 2;      // Starting from 2, the first prime number
  while (count < n) {
    if (is_prime(i)) count++;
    i++;
  }
  return i - 1;
}

int main() {
  int n = 10001;
  cout << nth_prime(n) << std::endl;
  return 0;
}
