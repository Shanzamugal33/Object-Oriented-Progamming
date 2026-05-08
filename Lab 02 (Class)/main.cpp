#include "Student.h"
#include "Rectangle.h"
#include "Voter.h"
#include "Temperature.h"
#include "Calculator.h"

int main()
{
    Student s1;
    s1.getData();
    s1.displayData();

    Rectangle r1;
    r1.setDimensions();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    Voter v1;
    v1.setData();

    if(v1.isEligible())
        cout << "Eligible to vote\n";
    else
        cout << "Not eligible to vote\n";

    Temperature t1;
    cout << "Enter Celsius: ";
    cin >> t1.celsius;
    t1.display();

   Calculator calc;
    int choice;

    cout << "Enter first number: ";
    cin >> calc.num1;
    cout << "Enter second number: ";
    cin >> calc.num2;

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
}
return 0;
}
