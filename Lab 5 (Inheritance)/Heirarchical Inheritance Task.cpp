#include <iostream>
using namespace std;

// Base Class
class Employee {
private:
    string name;
    float salary;

public:
    void input_employee() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived Class 1
class Developer : public Employee {
private:
    string programming_language;

public:
    void input_developer() {
        input_employee();
        cout << "Enter Programming Language: ";
        cin >> programming_language;
    }

    void display_developer() {
        display_employee();
        cout << "Programming Language: " << programming_language << endl;
    }
};

// Derived Class 2
class Designer : public Employee {
private:
    string design_tool;

public:
    void input_designer() {
        input_employee();
        cout << "Enter Design Tool: ";
        cin >> design_tool;
    }

    void display_designer() {
        display_employee();
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() {
    Developer d;
    Designer ds;

    cout << "\n   Enter Developer Info: \n";
    d.input_developer();

    cout << "\n   Enter Designer Info:  \n";
    ds.input_designer();

    cout << "\n  Developer Information: \n";
    d.display_developer();

    cout << "\n  Designer Information:  \n";
    ds.display_designer();

    return 0;
}
