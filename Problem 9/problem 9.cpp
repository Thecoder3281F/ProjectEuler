#include <iostream>
#include <cmath>

using namespace std;

// Function to generate Pythagorean triplets
int pythagoreanTriplets()
{
    // triplet: a^2 + b^2 = c^2
    int a, b, c = 0;

    // loop from 2 to max_limit
    int m = 2;
    while (true)
    {
        // now loop on j from 1 to i-1
        for (int n = 1; n < m; ++n)
        {
            // Evaluate and print triplets using
            // the relation between a, b and c
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (a + b + c == 1000) {
                return a * b * c;

            }


        }
        m++;
    }
}

// Driver code
int main()
{

    cout << pythagoreanTriplets() << endl;

    return 0;
}
