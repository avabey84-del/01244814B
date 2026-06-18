/* Stretch Activity: Compare 3 integers + show max, min, and difference */

#include <iostream>
#include <algorithm> // for max(), min()
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;

    // 1. Find max and min using built-in functions
    int maxVal = max(a, max(b, c));
    int minVal = min(a, min(b, c));

    // 2. Calculate difference between max and min
    int diff = maxVal - minVal;

    // 3. Check relationships between all pairs
    cout << "\n--- Comparison Results ---" << endl;

    if (a == b && b == c) {
        cout << "All three values
