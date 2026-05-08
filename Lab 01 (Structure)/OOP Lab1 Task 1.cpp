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
		cout<<"Full Name:"<<firstName<<" "<<lastName<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};
int main()
{
	Student s1;
	s1.firstName="Shahnza";
	s1.lastName="Munir";
	s1.rollNumber=02;
	s1.marks=85.5;
	//Calling member function
	
	s1.displayStudentInfo();
	
	return 0;	
}
