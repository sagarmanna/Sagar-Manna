#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int limit = a;
    if (a % 2 == 0) limit = a - 1;

    for (int i = 1; i <= limit * 2 - 1; i += 2) {
        cout << i;
        if (i < limit * 2 - 1) cout << ", ";
    }

    return 0;
}
