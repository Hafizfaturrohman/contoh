#include <iostream>
using namespace std;
struct Buku {
	string  judul;
	int tahun;
	Buku *selanjutnya;	
};
int main(){
	//dekalrasi single linked list
	Buku *node1, *node2;
	node1 =new Buku();
	node2 =new Buku();
	
	//pengisian node1
	node1->judul = "IPS";
	node1->tahun = 2020;
	node1->selanjutnya = node2;
	//pengisian node2
	node2->judul = "IPA";
	node2->tahun = 1998;
	node2->selanjutnya = NULL;
	//cetak singel linklist
	Buku *temp;
	temp node1;
	while(temp != NULL) {
		
	}
}


