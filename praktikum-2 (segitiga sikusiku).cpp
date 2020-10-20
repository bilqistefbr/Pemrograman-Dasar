//*Nama : Bilqist Elok Febriana
//*NIM : 20051397051
//*PRODI/KELAS : D4 Manajemen Informatika/2020A

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	
	int menu,a,t,m,s,l,k,h,y,x,jawab,akhir;
	float panjang_sisi_miring,luas,keliling,p;
	p=0.5;
	menu :
	cout <<"PEMROGRAMAN MENGHITUNG SEGITIGA SIKU-SIKU\n";
	cout <<"============================================================================================\n";
	cout <<"MENU SEGITIGA SIKU-SIKU\n"; 
	cout <<"1.Panjang sisi miring|2.Luas|3.Keliling|4.Keluar program\n";
	cout <<"MASUKAN MENU : ";
	cin >>menu;
	switch(menu)
	{
	case 1 :
		{
			cout <<"\nMENGHITUNG SISI MIRING\n";
			cout <<"alas (sisi sikusiku pertama) = ";cin >>a;
			cout <<"tinggi (sisi siku-siku kedua) = ";cin >>t;
			m=pow(a,2)+pow(t,2);
			s=sqrt(m);
			cout <<"sisi miring segitiga = "<<s;
			cout <<"\n \n";
			cout <<"TERIMA KASIH";
		}
	}
		
	switch(menu)
	{
		
	case 2 :
		{
			cout <<"\nMENGHITUNG LUAS\n";
			cout <<"alas (sisi sikusiku pertama) = ";cin >>a;
			cout <<"tinggi (sisi siku-siku kedua) = ";cin >>t;
			l=p*a*t;
			cout <<"luas segitiga siku-siku = "<<l;
			cout <<"\n \n";
			cout <<"\nTERIMA KASIH";
		}
    }
	switch(menu)
	{
	case 3 :
		{
		
		cout <<"\nMENGHITUNG KELILING\n";
		cout <<"alas (sisi sikusiku pertama) = ";cin >>a;
		cout <<"tinggi (sisi siku-siku kedua) = ";cin >>t;
		k=pow(a,2)+pow(t,2);
		s=sqrt(k);
		h=a+t+s;
		cout <<"keliling segitiga siku-siku = "<<h;
		cout <<"\n \n";
		cout <<"\nTERIMA KASIH";
	    }
				
    }
    switch(menu)
		{
			case 4:
			
			{
                 int jawab, menu;
                 cout<<"\n";
                 cout<<"Apakah Anda Yakin Ingin Keluar dari Program Ini??? \n";
                 cout<<"1. Ya \n";
                 cout<<"2. Tidak (Kembali ke Menu Utama)\n";
                 cout<<"Masukkan pilihan anda ";
                 cin>>jawab;
                 	if (jawab==1)
                 		goto Akhir;
                 	if (jawab==2)
                 		goto menu;
  
            }
                
		}
		Akhir :
			cout << "Terimakasih Sudah Menggunakan Program Ini :)\n \n";
			cout << "Good Luck ! ! !\n \n";
			cout << "Tekan ENTER untuk melanjutkan . . .\n \n \n";

		getch();
}
