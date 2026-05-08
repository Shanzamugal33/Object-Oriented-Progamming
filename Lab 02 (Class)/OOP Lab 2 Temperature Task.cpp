#include <iostream>
using namespace std;

class Temperature
{
public:
    float celsius;

    float convert()
    {
        return (celsius * 9/5) + 32;
    }

    void display()
    {
        cout << "Temperature in Fahrenheit: " << convert() << endl;
    }
};

int main()
{
    Temperature t1;

    cout << "Enter temperature in Celsius: ";
    cin >> t1.celsius;

    t1.display();

    return 0;
}
