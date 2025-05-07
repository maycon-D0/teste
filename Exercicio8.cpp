#include <iostream>
   using namespace std;

   int main()
{
	double tc;
	double x=9;
	double z=5;
	double y=32;
	double tf;
	
	
	cout << "informe a temperatura em graus celsius:";
	cin >>tc;
	
	tf=(tc*x/z) + y;
	
	cout<<"a temperatura em graus fahrenheit eh "
	<<tf<<endl;
	
	return 0;
}