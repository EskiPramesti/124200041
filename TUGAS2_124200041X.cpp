#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()

{
	
	int umur1, umur2, umur3, umur4,bs;
	int tagihan1, tagihan2, tagihan3, tagihan4;
	
	
cout<<"Umur ayah : ";cin>>umur1;
cout<<"Umur ibu : ";cin>>umur2;
cout<<"Umur anak pertama : ";cin>>umur3;
cout<<"Umur anak kedua : ";cin>>umur4;

//if bapak

if (umur1 <= 12)
{ tagihan1 = 15000 * 30; }
else if  (umur1 >= 12 && umur1 >= 20 )
{ tagihan1 = 20000 * 30; }
else if ( umur1 >= 20 )
{ tagihan1 = 30000 * 30; }
else 
{ cout<<"umur salah\n"; } 

//if ibu

if (umur2 <= 12)
{ tagihan2 = 15000 * 30; }
else if  (umur2 >= 12 && umur2 >= 20 )
{ tagihan2 = 20000 * 30; }
else if ( umur2 >= 20 )
{ tagihan2 = 30000 * 30; }
else 
{ cout<<"umur salah\n"; } 


//if anak1

if (umur3 <= 12)
{ tagihan3 = 15000 * 30; }
else if  (umur3 >= 12 && umur3 >= 20 )
{ tagihan3 = 20000 * 30; }
else if ( umur3 >= 20 )
{ tagihan3 = 30000 * 30; }
else 
{ cout<<"umur salah\n"; } 

//if anak2

if (umur4 <= 12)
{ tagihan4 = 15000 * 30; }
else if  (umur4 >= 12 && umur4 >= 20 )
{ tagihan4 = 20000 * 30; }
else if ( umur4 >= 20 )
{ tagihan4 = 30000 * 30; }
else 
{ cout<<"umur salah\n"; } 

bs = tagihan1 + tagihan2 + tagihan3 + tagihan4;


cout<<"Tagihan satu bulan adalah "<<bs;



}
