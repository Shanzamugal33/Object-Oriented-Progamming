#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Step 1: Create and write into file
    ofstream writeFile("notes.txt");

    writeFile << "This is first line." << endl;
    writeFile << "Welcome to file handling." << endl;
    writeFile << "C++ makes file handling easy." << endl;

    writeFile.close();

    cout << "Data written successfully.\n" << endl;

    // Step 2: Read file contents
    ifstream readFile("notes.txt");

    string line;

    cout << "File Contents:\n";

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    // Step 3: Append data without overwriting
    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Shahnza" << endl;
    appendFile << "Roll No: 2025-SE-02" << endl;

    appendFile.close();

    cout << "\nName and Roll Number appended successfully." << endl;

    return 0;
}
