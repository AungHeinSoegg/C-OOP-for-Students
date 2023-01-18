//program to five out homework assignment information.
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class student	/*Parent class*/

{private:
		string sname, snum, stype, marks;
protected:
		string stype;
	int marks;
public:
	void input_student();
	void display_student();
		void writeRecord();

};

void student::input_student()

{	cout<<"Student Name:	";
	cin>>sname;
	cout<<"Student Number:	";
	cin>>snum;
	cout<<"Student Type (Full-time or Part-time):	";
	cin>>stype;
	cout<<"Marks:	";
	cin>>marks;
}

void student::display_student()

{	cout<<"Student Name : "<<sname<<endl;
	cout<<"student Number	: "<<snum<<endl;
	cout<<"Student Type		: "<<stype<<endl;
	cout<<"Marks		: "<<marks<<endl;
}

void student::writeRecord()
	{
		cout<<endl<<"Writing to student.txt file......"<<endl;
	
		ofstream myfile("student.txt", ios::app);
		if (myfile.is_open())
	{
			myfile << sname << " " << " " << stype << " " << marks << "\n";
			myfile.close();
			
	}
	else
	cout << "Unable to open file";
	system("pause");
	
};

int main( )

{
	void addCustomer();
	char choice;
		do
		{		system("cls");
				cout << endl
				<< "Choose 1 to see the next homework assignment. \n"
				<< "Choose 2 for your grade on the last assignment. \n"
				<< "Choose 3 For assignment hint. \n"
				<< "Choose 4 to exit this program. \n"
				<< "Enter your choice and press Return: ";
				cin >> choice;
				
				 switch(choice)
				 {
				 		case '1':
				 				addCustomer();
				 				break;
				 		case '2':
				 				//code to ask for student number and give thecorresponding
				 				
				 				cout << "Option 2 is selected\n";
				 				system ("PAUSE");
				 				break;
				 		case '3':
				 			//code to display a hint for the current assignment would go here.
				 			
				 				cout << "Option 3 is selected\n";
				 				system ("PAUSE");
				 				break;
				 		case '4':
				 			
								cout << "End of program.\n";
				 				break;
				 				default:
				 			
				 				cout<< "Not a valid choice.\n"
				 						<< "Choose again.\n";
				 				system ("PAUSE");
				 				break;
				 		
				 }
		} while (choice != '4');
		system ("PAUSE");
		return 0;
}

	void addCustomer()
{
		student s;
		cout<<"Inptu data"<<endl;
		s.input_student();
		cout<<endl<<"Display data"<<endl;
		s.display_student();
		s.writeRecord();
		
};

