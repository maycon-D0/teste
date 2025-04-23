#include <iostream>
using namespace std;

int main()
{
	double diagonal;
    double area;
	
	cout<< "informe a diagonal do quadrado:";
	cin >>diagonal;
	
	area=(diagonal*diagonal)/2;
	
	cout << " a area do quadrado  eh  "	<< 
	area << endl;
	
	return 0;
}