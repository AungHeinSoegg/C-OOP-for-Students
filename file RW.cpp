#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void writeFile();
void readFile();

int main()

{
	//void writeFile();
	//readFile();
	return 0;
}

void writeFile()

{
	string data;
	// opena afile in writ mode
	ofstream myfile;
	myfile.open("data.txt");
	
	cout << "Writing to the file" << endl;
	cout << "What's your name?:" << endl;
	getline(cin, data);
	
	// write inputted data into the file.
	myfile << data << endl;
	
	cout << "How old are you?:";
	getline(cin, data);
	
	// again write inputted data into the file.
	myfile << data << endl;
	myfile.close();
}

void readFile()
{
	string data;
	
	// open afile in read mode.
	ifstream myfile;
	myfile.open("data.txt");\
	
	cout << "Reading from the file" << endl;
	//myfile >> data;
	//cout << data << endl;
	
	// again read the data from the file and display it.
	//myfile >> data;
	//cout << data << endl;
	
	while (getline(myfile, data))
	{
		cout << data << endl;
	}
	
	myfile.close();
}
