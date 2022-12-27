#include<iostream>
using namespace std;
int main(){
	cout<<" Nama  : Hafiz Faturrohman "<<endl;
	cout<<" Kelas : TI.22.A.4 "<<endl;
	cout<<" NIM   : 312210375 "<<endl;
	int NIM[9];
	int min, max, jml, rata;
	jml = 0;
	for(int a=1; a <= 9; a++){
		cout<<"masukan angka NIM ke :"<<a<<" = ";
		cin>>NIM[a];
		jml += NIM[a]; 
	} 
	rata = jml / 9.0;
	
	max = NIM[1];
	for(int x = 1; x <= 9; x++){
	  if(NIM[x] > max){
	  	max = NIM[x];
	  	
	  }else{
	  	max = max;
	  }
	}
	min = NIM[1];
	for(int y = 1; y <= 9; y++){
	  if(NIM[y] < min){
	  	min = NIM[y];
	  }else{
	  	min = min;
	  }
	}
	cout<<endl;
	cout<<"..........statistik NIM........."<<endl;
	cout<<endl;
	cout<<" jumlah seluruh NIM : "<<jml<<endl;
	cout<<" nilai maksimum     : "<<max<<endl;
	cout<<" nilai minimum      : "<<min<<endl;
	cout<<" nilai rata rata    : "<<jml/9.0<<endl;
}
