#include <iostream>
using namespace std;

int main()
{
	int baris;
	cout << "Nama = Hafiz Faturrohman \n";
	cout << "NIM  = 312210375 \n";
	cout << "masukkan baris = ";
	cin >> baris;

	for(int i = 1; baris >= i; i++){
		for(int j = baris; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

