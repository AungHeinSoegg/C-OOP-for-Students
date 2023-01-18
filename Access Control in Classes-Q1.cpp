#include <iostream>
#include <string>
using namespace std;

class Student

{
	public:
	int indexno;
	string name;	
};

int main()

{
	Student A;
	Student B;
	A. indexno = 1001;
	A. name = "Alan";
	
	B. indexno = 1002;
	B. name = "Beatrice" ;
	
	cout <<"Name and Index no of A is : "<< A. name << " "<< A. indexno << "\n";
	cout <<"Name and Index no of B is : "<< B. name << " "<< B. indexno << "\n";
}
