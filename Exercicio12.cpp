#include <iostream>
using namespace std;

int main()
{
	double vr1;
	double vr2;
	double vr3;
	double vr4;
	double vr5;
	double ttl;
	double pg;
	double tc;
	
	cout << "informe  o valor1:";
	cin >> vr1;
	
	cout << "informe  o valor2 :";
	cin >> vr2 ;
	
cout << "informe  o valor3:";
	cin >> vr3;
	
cout << "informe  o valor4 :";
	cin >> vr4;

cout << "informe  o valor5: ";
	cin >> vr5;
	ttl= vr1+ vr2+vr3+vr4+vr5;
cout << " o total eh "<< 	ttl<<endl;
cout<< " informe o valor do pagamento:";
cin>> pg;

tc= pg-ttl;
cout<< "o troco eh" << tc<<endl;



	
	return 0;
}