#ifndef VOTER_H
#define VOTER_H

#include <iostream>
using namespace std;

class Voter
{
public:
    string name;
    int age;

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
    if(age > 18)
        return true;
    else
        return false;
}

#endif
