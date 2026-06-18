#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << "First value is greater";
    } else if (a < b) {
        cout << "Second value is greater";
    } else {
        cout << "Both values are equal";
    }

    return 0;
}
