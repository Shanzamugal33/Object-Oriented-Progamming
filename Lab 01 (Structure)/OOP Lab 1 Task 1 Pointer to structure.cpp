#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    
    Student *ptr = new Student;

    // Assigning values using pointer
    cout << "Enter First Name: ";
    cin >> ptr->firstName;

    cout << "Enter Last Name: ";
    cin >> ptr->lastName;

    cout << "Enter Roll Number: ";
    cin >> ptr->rollNumber;

    cout << "Enter Marks: ";
    cin >> ptr->marks;

    // Calling function using pointer
    
    ptr->displayStudentInfo();

    return 0;
}
