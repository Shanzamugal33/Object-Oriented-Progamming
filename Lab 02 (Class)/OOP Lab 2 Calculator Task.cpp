#include <iostream>
using namespace std;

class Calculator {
public:
    float num1;
    float num2;

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Not divisible by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "Enter first number: ";
    cin >> calc.num1;
    cout << "Enter second number: ";
    cin >> calc.num2;

    cout << "Choose an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << calc.add() << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide() << endl;
        default :
        	cout<< "Invalid Choice!"<< endl;
        }
        return 0;
    };
