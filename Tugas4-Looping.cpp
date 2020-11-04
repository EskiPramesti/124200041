#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()

{
	
	int p,N,M, h;

	
	cout << "Perkalian dan perpangkatan ==========="<<endl;
	cout << "1. perkaliam"<<endl;
	cout << "2. perpangkatan"<<endl;
	cout << "Pilih : ";cin>>p;
	
	if ( p == 1)
	  { cout << "Input angka N = "; cin>>N;
		cout << "Input angka M = "; cin>>M; 
		
		cout << " Hasil "<<N<<"x"<<M<<endl;   
	
	h = N * M;
	
	for (int p = 0; p<M; p++) 
	
	cout <<N<< "+" <<M;  
	
	 cout << "="<<h; }
	
	
	else 
	{ cout << "Input angka N = "; cin>>N;
		cout << "Input angka M = "; cin>>M; 
		
		cout << " Hasil "<<N<<"^"<<M<<endl;
		
		
		
	for (int p = 0; p<M; p++) 
	
	h = N * M;
	
	cout <<  N<< "x" <<M;   }
	
	cout << "="<<h;
}	
