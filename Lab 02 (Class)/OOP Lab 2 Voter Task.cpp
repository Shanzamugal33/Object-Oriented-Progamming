#include <iostream>
using namespace std;

class Voter
{
private:
    string name;
    int age;

public:
    void setData();
    bool isEligible();
};

void Voter::setData()
{
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;
}

bool Voter::isEligible()
{
    if(age >= 18)
	return true;
    else
	return false;
}

int main()
{
    Voter v1;

    v1.setData();

    if(v1.isEligible())
        cout << "You are eligible to vote." << endl;
    else
        cout << "You are not eligible to vote." << endl;

    return 0;
}
