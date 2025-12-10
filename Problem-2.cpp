#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    for (int i = 1; i <= a * 2 - 1; i += 2) {
        cout << i;
        if (i < a * 2 - 1) cout << ", ";
    }

    return 0;
}
