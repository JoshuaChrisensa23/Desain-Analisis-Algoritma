#include <iostream>
using namespace std;

int dt[1024], mod, y = 0;
bool ketemu = false;

void prim(int j){
	for(int i = 1; i <= j; i++){
		int jf = 0;
		for (int h = 1; h <= i ; h++){
			if(i % h == 0){
				jf++;
			}
		}
		if(jf == 2){
			mod = i;
		}
	}
	
	for(int i = 0; i < j; i++){
		dt[i] = -1;
	}
}

void hash(int da){
	bool cek;
	int i = 0;
	while((!cek) && (i < mod)){
		int m =  (da % mod) + i;
		if(dt[m] == -1){
			dt[m] = da;	
			cek = true;
		}else{
			cout<<"Tabrakan pada Table."<<endl;
			i++;
		}
	}
}

void find(int k, int jmlh){
	int i = 0;
	for(int j = 0; j < jmlh; j++){
		if(dt[j] == k){
			ketemu = true;
		}
	}
}

int main(){
	int pl, o, pin, da[100], x;
	cout<<"Masukan Jumlah Tabel: ";
	cin>>pin;
	prim(pin);
	
	cout<<"Masukan Jumlah Elemen: ";
	cin>>pl;
	for(int i = 0; i < pl; ++i){
		cin>>x;
		hash(x);
	}

	cout<<"Isi Hash Table: "<<endl;
	for(int i = 0; i < pin; i++){
		if(dt[i] == -1){
			cout<<i<<" --> kosong"<<endl;
		}else{
			cout<<i<<" --> "<<dt[i]<<endl;
		}
	}
	
	cout<<"Masukan Elemen yang ingin dicari: ";
	cin>>o;
	find(o, pin);
	
	if(ketemu){
		cout<<o<<" ditemukan didalam tabel hash."<<endl;
	}else{
		cout<<o<<" tidak ditemukan didalam tabel hash."<<endl;
	}
}
