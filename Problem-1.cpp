#include <iostream>
using namespace std;

class Calculator {
public:
    double calculate(double a, double b, string operation) {
        if (operation == "add") return a + b;
        else if (operation == "sub") return a - b;
        else if (operation == "mul") return a * b;
        else if (operation == "div") {
            if (b != 0) return a / b;
            else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        }
        else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double a, b;
    string op;

    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "Enter operation (add/sub/mul/div): ";
    cin >> op;

    double result = calc.calculate(a, b, op);
    cout << "Result: " << result << endl;

    return 0;
}
