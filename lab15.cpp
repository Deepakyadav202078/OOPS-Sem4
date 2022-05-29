//program to show the concept of containership
#include <iostream>
using namespace std;

class first {
private:
	int num;

public:
	void showf()
	{
		cout << "Hello India!\n";
		cout << "num = " << num << endl;
	}

	int& getnum()
	{
		return num;
	}
};

// Container class
class second {
	// creating object of first
	first f;

public:
	// constructor
	second()
	{
		f.getnum() = 20;
		f.showf();
	}
};

int main()
{
	// creating object of second
	second s;
	return 0;
}
