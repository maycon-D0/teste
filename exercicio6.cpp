#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
	double valor1;
	double valor2;
	double mg ;
	
	cout << "informe valor1:";
	cin >> valor1;
	cout << "informe valor2:";
	cin >> valor2;
	
	mg=sqrt(valor1*valor2);
	
	cout<< "a media geometrica eh "<<mg<<endl;
	return 0;
}