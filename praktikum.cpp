#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
char nama, nim;
int nilai, uts, uas;

cout<<"Nama : ";cin>>nama;
cout<<"NIM : ";cin>>nim; 
cout<<"UTS : ";cin>>uts;
cout<<"UAS : ";cin>>uas;
cout<<endl;

cout<<"Hai, "<<nama; cout<<", dengan nim "<<nim;
cout<<endl;
nilai = (uts+uas) / 2; 
cout<<endl;
cout<<" Nilai akhir anda = "<<nilai;

}
