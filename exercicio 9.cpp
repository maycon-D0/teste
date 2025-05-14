#include <iostream>
#include <math.h>
using namespace std ;
   
    int main()
 
 {
 	double dm;
 	double ar;
 	
 	cout<< "informe o diametro do circulo:";
 	cin>>dm;
 	ar= (pow((dm/2),2))*3.14;
 	
 	cout<<" a area do circulo eh " <<ar << endl;
 	
 	return 0;
 }