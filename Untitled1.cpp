#include <iostream>
using namespace std;
int main() {
	cout<<"hafiz faturrohman"<< endl;cout <<(100000+(1500*(kwh-100)))
	cout<<"312210375"<< endl;
	cout<<""<< endl;
	cout<<"membuat tagihan listrik"<< endl;
	int kwh, pemakaian, k;
	cout<<"penghitung tagihan listrik";
	cin>>kwh;
	if (kwh<100)
	k='A';
	else if (kwh>100&&kwh<500)
	k='B';
	else if (kwh>500)
	k='C';
	cout<<"jumlah pembayaran yang Anda bayar bulan ini adalah = Rp.";
	switch (k){
		case 'A':
			cout <<(100000);
		break;
		case 'B':
			cout <<(100000+(1500*(kwh-100)));
		break;
		case 'C' :
			cout <<(100000+(2000*(kwh-500)));
		break;
	}
	
}
