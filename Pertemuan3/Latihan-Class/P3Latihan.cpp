#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

class Mahasiswa{
	private :
		string nama;
		int NIM;
	
	public :
		void setNama(string a){
			nama = a;
		}
		void setNIM(int b){
			NIM = b;
		}
		
		string getNama(){
			return nama;
		}
		int getNIM(){
			return NIM;
		}
};

int main(){
	
	Mahasiswa HAHA;
	
	string b;
	int s;
	
	cout<<"Masukan nama Mahasiswa : ";
	getline(cin, b);
	cout<<"\nMasukan NPM Mahasiswa : ";
	cin>>s;
	
	HAHA.setNama(b);
	HAHA.setNIM(s);
	
	cout<<endl<<endl;
	
	cout<<"Data Mahasiswa "<<endl
		<<"Nama Mahasiswa : "<<HAHA.getNama()
		<<"\nNPM Mahasiswa : "<<HAHA.getNIM();
	
}
