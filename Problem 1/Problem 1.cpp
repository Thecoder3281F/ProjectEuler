#include <iostream>

using namespace std;

int main() {
    int limit;
    cin >> limit;
    int mult3sum = 0;
    int mult5sum = 0;
    int mult15sum = 0;

    for (int i=0; i < limit; i++) {
        if (i % 3 == 0) {
            mult3sum += i;
        }

        if (i % 5 == 0) {
            mult5sum += i;
        }

        if (i % 15 == 0) {
            mult15sum += i;
        }
    }


    int final_sum = mult3sum + mult5sum - mult15sum; // gcd(3, 5) = 15, remove one copy to avoid double counting

    cout << final_sum;
}
