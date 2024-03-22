#include<iostream>
using namespace std;

class Perpus {
	private:
		string nama[100];
		string buku[100];
	public:
		void setnama(string a[], int s) {
			for(int i = 0; i < s; i++) {
				nama[i] = a[i];
			}
		}
		void setbuku(string p[], int m) {
			for(int i = 0; i < m; i++) {
				buku[i] = p[i];
			}
		}
		string getnama(int i) { 
			return nama[i];
		}
		string getbuku(int i) { 
			return buku[i];
		}
};

int main() {
	Perpus peminjaman;
	string a[100], p[100];
	int m;
	
	cout<<"Masukan Jumlah Peminjaman Buku hari ini : ";
	cin>> m;
	
	
	for(int i = 0; i < m; i++) {
		cout << "Masukkan Nama Peminjam ke " << i+1 << ": ";
		cin >> a[i];
		cout << "Masukkan Judul Buku ke " << i+1 << ": ";
		cin >> p[i];
	}
	
	peminjaman.setnama(a, m);
	peminjaman.setbuku(p, m);
	
	cout<<endl<<endl;
	
	for(int i = 0; i < m; i++) {
		cout << "Peminjaman Buku Ke-"<<i+1<<endl;
		cout << "Nama peminjam : " << peminjaman.getnama(i) << endl;
		cout << "Nama buku  : " << peminjaman.getbuku(i) << endl;
	}
	return 0;
}
