#include<iostream>
using namespace std;
struct Mahasiswa

{
	char Nim[9];
	char Nama[25];
	char Alamat[40];
	short Umur;
};
int main ()
{
    Mahasiswa Mhs[2];
	int i;
	for (i=0; i<2; i++)
	{
	cout<<"NIM  : ";
	cin>>Mhs[i].NIM;
	cout<<"NAMA : ";
	cin>>Mhs[i].NAMA;
	cout<<"ALAMAT  : ";
	cin>>Mhs[i].ALAMAT;
	cout<<"Umur    : ";
	cin>>Mhs[i].Umur;
	}
	for (1=0; 1<2; 1++)
	{
    cout<<"\n\nNim     : "<<Mhs[i].Nim;
	cout<<"\nNama      : "<<Mhs[i].Nama;
	cout<<"\nAlamat    : "<<Mhs[i].Alamat;
	cout<<"\nUmur      : "<<Mhs[i].Umur;
	}
}
