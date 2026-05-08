#include <iostream>
using namespace std;

//Base Class
class File{
	public:
		File() {
		cout<<"File opened"	<<endl;
		}
		
		~File() {
			cout<<"File closed" <<endl;
		}
};

//Derived Class
class TextFile: public File{
	public:
		TextFile() {
	    cout<<"Text file created" <<endl;
		}
		
		~TextFile() {
		cout<<"Text file destroyed"	<<endl;
		}
};
int main()
{
	TextFile t;     //object created
	return 0;       //object destroyed
}

