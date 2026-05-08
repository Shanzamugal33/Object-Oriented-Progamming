#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    float marks;

    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "Student Data:" <<endl;
        
		cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.displayData();

    return 0;
}
