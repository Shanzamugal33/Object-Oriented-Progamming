#ifndef CALCULATOR_H
#define CALCULATOR_H

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
            cout << "Error: Division by zero!" << endl;
        }
};

#endif
