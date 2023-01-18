#include <iostream>
#include <string>
#include <sstream>	//make certain kinds of string manipulations much easier
using namespace std;

struct movies_t

{
string title;
int year;
} mine, yours;

void printmovie (movies_t movie);

int main()

{
	string mystr;
	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;
	
	cout << "Enter title: ";
	getline (cin,yours.title);		//extract characters from input until delimitation
									//character is found (return or \n)
	cout << 'Enter year: ';
	getline (cin,mystr);
	stringstream(mystr) >> yours.year;
	
	cout << "My Favorite movie is:\n";
	printmovie (mine);
	cout << "And Yours is:\n";
	printmovie (yours);
	return 0;
}

void printmovie (movies_t movie)

{
	cout << movie.title;
	cout << " (" << movie.year << " )\n";
}

