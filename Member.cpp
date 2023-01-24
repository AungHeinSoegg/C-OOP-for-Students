//program to five out homework assignment information.
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class member	/*Parent class*/

{private:
		string mname, mid, mtype, creditpoint;
protected:
		string stype;
		int crecitpoint;
public:
	void input_member();
	void display_member();
		void writeRecord();

};

void member::input_member()

{	cout<<"Member Name:	";
	cin>>mname;
	cout<<"Member ID:	";
	cin>>mid;
	cout<<"Member Type (Ordinary or Silver or Gold):	";
	cin>>mtype;
	cout<<"Credit Point:	";
	cin>>creditpoint;
}

void member::display_member()

{	cout<<"Member Name 	: "<<mname<<endl;
	cout<<"Member ID	: "<<mid<<endl;
	cout<<"Member Type		: "<<mtype<<endl;
	cout<<"Credit Point		: "<<creditpoint<<endl;
}

void member::writeRecord()
	{
		cout<<endl<<"Writing to MEMBER.txt file......"<<endl;
	
		ofstream myfile("MEMBER.txt", ios::app);
		if (myfile.is_open())
	{
			myfile << mname << " " << mid << " "  << mtype << " " << creditpoint << " " <<"\n";
			myfile.close();
			
	}
	else
	cout << "Unable to open file";
	system("pause");
	
};

int main( )

{
	void addMember();
	char choice;
		do
		{		system("cls");
				cout << endl
				<< "Choose 1 to Add a new member to file. \n"
				<< "Choose 2 to modifies the details of an existing member. \n"
				<< "Choose 3 to displays the member details from the file . \n"
				<< "Choose 4 to exit. \n"
				<< "Enter your choice and press Return: ";
				cin >> choice;
				
				 switch(choice)
				 {
				 		case '1':
				 				addMember();
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

	void addMember()
{
		member m;
		cout<<"Inptu data"<<endl;
		m.input_member();
		cout<<endl<<"Display data"<<endl;
		m.display_member();
		m.writeRecord();
		
};

