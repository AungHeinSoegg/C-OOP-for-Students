#include <iostream>
#include <string>
using namespace std;

class Student

{
	private:		// Private data member
	int indexno;
	
	public:			// Public accessor and mutator function
	int getINdexno()
	{
		return indexno;
	}
	void setINdexno(int i)
	{
		indexno = i;
	}
};

int main()
{
	Student A;
	// A. indexno = 1;		// Compile time error
	//cout << A. indexno;	// Compile time error
	
	A.setINdexno(1);		// Indexno initialized to 1
	cout << A.getINdexno() << "\n"; // Output will be 1
}
