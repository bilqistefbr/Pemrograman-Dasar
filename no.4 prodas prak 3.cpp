#include <iostream>
#include <math.h>

using namespace std;

int main()

{	
	int Jumlah=0;
	float i, Pangkat;
	cout<< endl;
	for(int i = 1; i<=6; i++)
	{
		Pangkat = pow(i,3);
		cout<<"Suku ke-"<< i;
		cout<< "\n  Pangkat 3 = "<< Pangkat<< endl;
		Jumlah+=Pangkat, Pangkat++;

	} 

	cout<< "\n JUMLAH HASIL PANGKAT = "<< Jumlah<< endl;
	cout<< endl;
	cout<< endl;
	
	return 0;
}
