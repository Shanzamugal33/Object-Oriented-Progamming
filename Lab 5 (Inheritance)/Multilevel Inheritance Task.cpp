#include <iostream>
using namespace std;

// Base Class
class Person {
private:
    string name;
    int age;

public:
    void input_person() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class 1
class Employee : public Person {
private:
    string employee_id;

public:
    void input_employee() {
        input_person();
        cout << "Enter Employee ID: ";
        cin >> employee_id;
    }

    void display_employee() {
        display_person();
        cout << "Employee ID: " << employee_id << endl;
    }
};

// Derived Class 2
class Manager : public Employee {
private:
    string department;

public:
    void input_manager() {
        input_employee();
        cout << "Enter Department: ";
        cin >> department;
    }

    void display_manager() {
        display_employee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.input_manager();
    cout << "  Manager Information:  "<< endl;
    m.display_manager();

    return 0;
}
