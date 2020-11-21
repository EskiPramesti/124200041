#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main () {
	
	int pilih;

	cout << "Gambar Bangun Datar ==========="<<endl;
	cout << "1. persegi"<<endl;
	cout << "2. segitiga"<<endl;
	cout << "Pilih : ";cin>>pilih;
	
	if (pilih == 1) {
		int rows,columns,i,j;
		cout<<"Enter the number of rows\n";
		cin>>rows;//Takes input from user for rows
		cout<<"Enter the number of columns\n";
		cin>>columns;//Takes input from user for columns
		
		for (i=1; i<=rows; i++) {
			for (j=1; j<=columns; j++){
				if(i==1||i==rows||j==1||j==columns){
					cout<<"*";
				} else {
					cout<<" ";
				}
			}
			cout<<"\n";
		}
	}
	
	if (pilih == 2) {
		int rows;

		cout << "Enter number of rows: ";
		cin >> rows;

		for(int i = 1; i <= rows; ++i){
			for(int j = 1; j <= i; ++j){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
}

