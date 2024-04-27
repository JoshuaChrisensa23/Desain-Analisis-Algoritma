#include <iostream>
using namespace std;

int main(){
	int nilai[201], posisi[20], i, n, bil, jmlh = 0;
	bool ketemu;
	
	cout<<"Masukan Jumlah Deret Bilangan = ";
	cin>>n;
	cout<<endl;
	
	for(i = 0; i < n; i++){
		cout<<"Nilai Bilangan ke-"<<i<<" = ";
		cin>>nilai[i];
	}
	
	cout<<"\nDeret Bilangan = ";
	for(i = 0; i < n; i++){
		cout<<nilai[i];
	}
	
	cout<<"\n\nMasukan Bilangan yg Akan Dicari = ";
	cin>>bil;
	
	for(i = 0; i < n; i++){
		if(nilai[i] == bil){
			ketemu = true;
			posisi[jmlh] = i;
			jmlh++;
		}
	}
	
	if(ketemu){
		cout<<"Bilangan "<<bil<<" Ditemukan sebanyak "<<jmlh;
		cout<<"\npada posisi ke = ";
		for(i = 0; i < jmlh; i++){
			cout<<posisi[i]<<" ";
		}
	}else{
		cout<<"Maaf, bilangan "<<bil<<" tidak ditemukan";
		getchar();
	}
}
