#include <iostream>
using namespace std;

long fibonacci(int n) {
  if (n == 0 || n == 1) return n;

  long prev = 0;
  long current = 1;
  long next;

  for (int i = 2; i <= n; i++) {
    next = prev + current;
    prev = current;
    current = next;
  }

  return current;
}

int main() {
  int i = 1;
  long even_sum = 0;
  while (fibonacci(i) <= 4000000) {
    if (fibonacci(i) % 2 == 0) {
        even_sum += fibonacci(i);

    }
    i++;
  }

  cout << even_sum;

  return 0;
}
