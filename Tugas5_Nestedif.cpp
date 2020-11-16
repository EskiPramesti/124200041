#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main ()

{
	
	int pilih,n,j,i;

	
	cout << "Gambar Bangun Datar ==========="<<endl;
	cout << "1. persegi"<<endl;
	cout << "2. segitiga"<<endl;
	cout << "Pilih : ";cin>>pilih;
	
	if (pilih == 1)
	{
		cout << "\n Panjang : ";cin>>n;
		cout << "\n Lebar : ";cin>>j;
	}
		{if (n > 2)
		{	for (int i=0; i<n; i++)
		{	for (int j=0; j<n; j++)
		{	if (( i==0)|| (i==n-1)||(j==0)|| (j==n-1))
			{ cout << ("*");}
		else if
		{if (n%2==1)
			{cout << (" "); } 
		}
		else 
		{ cout << (" "); }
	}
	{
		cout <<"n"
	}
	}
	 if (pilih == 2)
	{
		cout << "\n Tinggi : ";cin>>i;
	}
		scanf("%d",&n);
 for(i=n;i>=1;i--){
  for(j=1;j<=i;j++)
  {
  printf("%d",j);
  }
  printf("\n");
 }
	

}
