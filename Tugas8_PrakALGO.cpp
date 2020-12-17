 #include <iostream>
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{	int pilih, r, t;
	float phi = 3.14, luas, keliling, volume ; 
	string ul;
	
	
	cout <<"----------------------------------------------------"<<endl;
	cout <<"TUGAS 8 PRAKTIKUM ALGORITMA DAN PEMROGRAMAN I"<<endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<"nama\t\t = Eski Nur Pramesti"<< endl;
	cout <<"NIM\t\t = 124200041"<< endl;
	cout <<"----------------------------------------------------"<<endl;
	cout <<endl;
	
	cout <<"Hitung Lingkaran===================================="<<endl;
	cout <<"1. Luas Lingkarang \n2. Keliling Lingkaran \n3. Volume Tabung"<<endl;
	
	putaran :
	cout <<endl;
	cout <<"Pilih \t :"; cin >>pilih;
	cout <<endl;
	
	switch (pilih)
	
	{case (1) ://Luas Lingkaran
		cout <<"Jari-jari \t : "; cin >> r ; 
			
		luas = phi * r *r ;									
		
		cout <<"Luas Lingkaran \t : "<< luas <<endl;
		cout <<"Ulangi Program ? (y/n) : "; cin >> ul ;
		
	break ;
	
	case (2) ://Keliling Lingkaran
		cout <<"Jari-jari \t   : "; cin >>r ;
			
		keliling = phi * (2 * r) ;
		
		cout <<"Keliling Lingkaran : "<< keliling <<endl;
		cout <<"Ulangi Program ? (y/n) : "; cin >> ul ; 
		
	break ;
	
	case (3) ://Volume Tabung
		cout <<"Jari-jari \t : "; cin >>r ;
		cout <<"Tinggi \t\t : "; cin >>t ;
		 
		volume = (phi * r * r ) * t ;						
		 
		cout <<"Volume Lingkaran : "<< volume <<endl;	
		cout <<"Ulangi Program ? (y/n) : "; cin >> ul ;
	    
	break ;
		
		default : 
		cout<< "Input Anda Salah"<<endl;
	}
		if (ul == "y")
			{goto putaran ;}
			 
		else { cout <<"Program Selesai, Terimakasih :)"<<endl; 
		}
	}
