#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main (void)

{
	
	string user,pass,matkul;
	int nilai1,nilai2,nilai3,hasil;
	
	cout<< " Login Akun ========="<<endl;
	cout<< " Username ="; cin>>user;
	cout<< " Password ="; cin>>pass;

if(user == "mahasiswa" && pass == "sisfo")
    {
     if(user == "mahasiswa" && pass == "sisfo")
        cout<< "=============== \n";
        cout<< " Login Berhasil! \n " ;
      
      //berhasil
     
     cout<< "\n Input Nilai Mata Kuliah  \n";
	 cout<< "1. Algoritma dan Pemrograman  \n";
	 cout<< "2. Kalkulus \n";
	 cout<< " Pilih : "; cin>>matkul;
	 
	 
    }
      //if nilai
     if (matkul == "1" )
      {
	      cout<< "\n Nilai harian	=  " ; cin>>nilai1; 
		  cout<< " Nilai UTS	=  " ; cin>>nilai2;  
		  cout<< " Nilai UAS	=  " ; cin>>nilai3;  
		  
		  hasil = ( nilai1 + nilai2 + nilai3 ) / 3;
		  
		  if ( hasil <80 )
		    { cout<< " \n Maaf Anda tidak lulus Algoritma dan Pemrograman dengan nilai "<<hasil; }
		    else if ( hasil >= 80 )
		    { cout<< " \n Selamat Anda lulus Algoritma dan Pemrograman dengan nilai "<<hasil; }
	  }    
		    if ( matkul == "2" )
		   {
	      cout<< " \n Nilai harian	=  " ; cin>>nilai1; 
		  cout<< " Nilai UTS	=  " ; cin>>nilai2;  
		  cout<< " Nilai UAS	=  " ; cin>>nilai3;  
		  
		  hasil = ( nilai1 + nilai2 + nilai3 ) / 3;
		  
		  if ( hasil <80 )
		    { cout<< " \n Maaf Anda tidak lulus Kalkulus dengan nilai "<<hasil; }
		    else if ( hasil >= 80 )
		    { cout<< " \n Selamat Anda lulus Kalkulus dengan nilai "<<hasil; }
		    
	  }  
		 
     else if ( user == "mahasiswa" && pass != "sisfo")
     {
          cout<< " Password anda salah " ;
     }
     else if ( user != "mahasiswa" && pass == "sisfo")
     {
          cout<< " Username anda salah ";
     }
     else
     {
		 cout<< " Anda tidak bisa login";
	 }
	 
 
    
}
