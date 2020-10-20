//*Nama : Bilqist Elok Febriana
//*NIM : 20051397051
//*PRODI/KELAS : D4 Manajemen Informatika/2020A

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

using namespace std;
int main ()
{
	int jam = 0, total, sisa, sisa_1, jumlah;
	char nama [20], yt, pilih_kode;
	Awal : 
	system ("cls");
	
	cout << "Masukan Nama Karyawan : "; cin >> nama; cout << endl;
	cout << "Golongan A" << endl;
	cout << "Golongan B" << endl;
	cout << "Golongan C" << endl;
	cout << "Golongan D" << endl;
	cout << "Note : Pakai huruf kapital untuk pemilihan." << endl;
	cout << "Pilih kode golongan A/B/C/D : ";
	cin >> pilih_kode;
	cout << "Jumlah jam kerja : ";
	cin >> jam;

	if (pilih_kode == 'A')
    {
        jumlah = 5000;
    }
    else if (pilih_kode == 'B')
    {
        jumlah = 7000;
    }
     else if (pilih_kode == 'C')
    {
    	jumlah = 8000;
	}
	else if (pilih_kode == 'D')
	{
		jumlah = 10000;
	}

    if (jam > 48)
    {
        sisa = jam - 48; 
        sisa_1 = jumlah * (jam-sisa); 
        total = 4000 * sisa; 
        jumlah = sisa_1 + total; 
    }
    
    else
    {
        jumlah = jumlah * jam;
    }


    cout << jumlah << endl;
    
    cout << " Kembali ke menu? (Y/T)? "; cin >> yt;
    if(yt=='Y'||yt=='y') goto Awal;	if(yt=='T'||yt=='t') goto Akhir;
    cout <<endl<< "--------------------------------------------------" <<endl;
    Akhir :
    cout <<endl<< "--------------------------------------------------" <<endl;
    cout <<"Terima Kasih" <<endl;
    cout <<endl<< "--------------------------------------------------" <<endl;
    return 0;
}
