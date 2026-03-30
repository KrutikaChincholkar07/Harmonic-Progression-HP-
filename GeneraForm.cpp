#include <iostream>
using namespace std;

int main() {
    int a, d, n;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common difference (d): ";
    cin >> d;

    cout << "Enter number of terms (n): ";
    cin >> n;

    cout << "Harmonic Progression: ";

    for(int i = 0; i < n; i++) {
        cout << "1/" << (a + i * d) << " ";
    }

    return 0;
}
