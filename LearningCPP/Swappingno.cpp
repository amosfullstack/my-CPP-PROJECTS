#include <iostream>
using namespace std;

int main() {
    int a, b, num;

    // Input numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping using a temporary variable
    num = a;
    a = b;
    b = num;

    // Output the swapped numbers
    cout << "After swapping, a = " << a << " and b = " << b << endl;

    return 0;
}

