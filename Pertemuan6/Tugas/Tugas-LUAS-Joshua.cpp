#include <iostream>
#include <string.h>
using namespace std;

class bgndtr{
	protected:
		int png, tng;
	public:	
		void set_nilai(int a, int b){
			png = a;
			tng = b;
		}	
};

class sgtg : public bgndtr{
	public:
		float getL_sgtg(){
			return (png * tng / 2);
		}
};

class prsg : public bgndtr{
	public:
		float getL_prsg(){
			return (png * png);
		}
};

class prsg_png : public bgndtr{
	public:
		float getLprsg_png(){
			return (png * tng);
		}
};

int main(){
	int sisi, tinggi, jmlh, alas, pnj, lebar;
	int p;
	char c;
	
	prsg_png  persgpnj;
	sgtg  segitiga;
	prsg  persegi;
	
	do{
		cout<<"Masukan Panjang Persegi Panjang: ";
		cin>>pnj;
		cout<<"Masukan Tinggi Persegi Panjnang: ";
		cin>>lebar;
		
		cout<<"\nMasukan Sisi Persegi: ";
		cin>>sisi;
		
		cout<<"\nMasukan Alas Segitiga: ";
		cin>>alas;
		cout<<"Masukan Tinggi Segitiga: ";
		cin>>tinggi;
		
		persgpnj.set_nilai(pnj, lebar);
		segitiga.set_nilai(alas, tinggi);
		persegi.set_nilai(sisi, sisi);
		
		cout<<"\n\nLuas Segitiga = "<<segitiga.getL_sgtg()<<endl
			<<"Luas Persegi = "<<persegi.getL_prsg()<<endl
			<<"Luas Persegi Panjang = "<<persgpnj.getLprsg_png()<<endl;
		
		
		
		cout<<"Apakah ingin megulang perhitungan lagi? (y/n): ";
		cin>>c;
		
		cout<<endl<<endl;
	}
	while(c == 'y' || c == 'Y');
	
}


