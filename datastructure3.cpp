#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()

{
	string search;
	fstream inFile("student.text" , ios::in | ios::out);
	string line, line2, line3;
	string myArray [4];
	
	inFile.is_open();
	
	if(!inFile)
	{cout << "Unable to open file" << endl;
	exit(1);
	}
	
	size_t pos;
	while(inFile.good())
	{
		getline(inFile,line); //get line from file
		pos=line.find(search); // search
		if(pos!=string::npos) //string;;nops is returned if string is not found
		
		{	cout << "found!";
					cout << line << '\n';
					
					ofstream tempfile("file.text");
					tempfile << line;
					tempfile.close();
					
					string newline;
					fstream newfile("file.text", ios::in | ios::out);
					
					if(newfile.is_open())
					
					{
								//string myArray[3];
								for(int i=0; i < 4; ++i)
								{
										newfile >> myArray[i];
								}
								
					}
					
					for(int i=0; i<4; i++)
					{
						cout << myArray[i] << "\n";
					}
					newfile.close();
					
					fstream newfile2("file.text", ios::in | ios::out);
					cout<<"Marks: ";
					cin>>myArray[3];
					newfile2 << myArray[0] << " " << myArray[1] << " " << myArray[2] << " " << myArray[3];
					
					newfile2.close();
					inFile.close();
					break;
		}
	}
	
	ifstream file;
	ofstream outfile;
		ofstream newfile;
		string lineN;
		
		cout << search;
		system("pause");
		
	file.open("student.txt");
	outfile.open("newS.txt");
		
		while (getline(file,lineN))
	{
			if( (lineN.find(search, 0)))
			outfile << lineN << "\n";
	}
	
	outfile.close();
	file.close();
	remove("student.txt");
	rename("new.txt","student.txt");
	
		newfile.open("student.txt", ios::app);
		newfile << myArray[0] << " " << myArray[1] << " " << myArray[3];
		newfile.close();
}
