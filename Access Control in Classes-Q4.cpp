#include <iostream>

using namespace std;
int operate (int a, int b)
{
	return (a+b);
}

int operate (int a, int b, int c)
{
	return (a+b+c);
}

int main ()
{
	int x=5, y=2, z=10;
	
	cout << operate (x,y) << '\n';			//operate () with 2 arguments will be called
	cout << operate (x, y, z) << '\n';		//operate () with 3 arguments will be called
	return 0;
}
