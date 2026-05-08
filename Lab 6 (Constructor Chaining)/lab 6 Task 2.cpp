#include <iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle(string type)
		{
			cout<<"Vehicle Constructor: "<< type<< endl;
		}
};

//Derived class (Vehicle -> Car)
class Car : public Vehicle
{
	public:
		Car(string type, string brand) : Vehicle (type)
		{
		cout<<"Vehicle Constructor: "<< brand<< endl;	
		}
};

//Derived class (Car -> ElectricCar)
class ElectricCar : public Car
{
	public:
		ElectricCar(string type, string brand, string battery) : Car(type, brand)
		{
			cout<<"Electric Car costructor: "<<battery<<endl;
		}
};
int main()
{
	ElectricCar e("Transport", "Tesla", "150kwh");
	return 0;
}


