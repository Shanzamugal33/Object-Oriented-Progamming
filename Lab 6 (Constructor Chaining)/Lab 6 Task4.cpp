#include <iostream>
using namespace std;

// Base Class
class Device {
private:
    char* deviceName;
    int deviceID;
    float* data;

public:
    // Constructor
    Device(const char* name, int id, float d) {
        // find length
        int len = 0;
        while(name[len] != '\0') {
            len++;
        }

        // allocate memory
        deviceName = new char[len + 1];

        // copy string
        for(int i = 0; i <= len; i++) {
            deviceName[i] = name[i];
        }

        deviceID = id;

        data = new float;
        *data = d;

        cout << "Device Constructor\n";
    }

    void showDevice() {
        cout << "Name: " << deviceName << endl;
        cout << "ID: " << deviceID << endl;
        cout << "Data: " << *data << endl;
    }

    // Destructor
    ~Device() {
        delete[] deviceName;
        delete data;
        cout << "Device Destructor\n";
    }
};

// Derived Class
class Sensor : public Device {
private:
    char* sensorType;
    float* sensorValue;

public:
    // Constructor
    Sensor(const char* name, int id, float d,
           const char* type, float value)
        : Device(name, id, d) {

        int len = 0;
        while(type[len] != '\0') {
            len++;
        }

        sensorType = new char[len + 1];

        for(int i = 0; i <= len; i++) {
            sensorType[i] = type[i];
        }

        sensorValue = new float;
        *sensorValue = value;

        cout << "Sensor Constructor\n";
    }

    void showSensor() {
        showDevice();
        cout << "Type: " << sensorType << endl;
        cout << "Value: " << *sensorValue << endl;
    }

    // Destructor
    ~Sensor() {
        delete[] sensorType;
        delete sensorValue;
        cout << "Sensor Destructor\n";
    }
};

// Main
int main() {
    Sensor* s = new Sensor("Device1", 1, 10.5, "Temp", 36.6);

    cout << "\nOutput:\n";
    s->showSensor();

    delete s;   // destructor call

    return 0;
}
