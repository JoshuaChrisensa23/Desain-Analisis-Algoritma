#include<iostream>
using namespace std;

class Mahasiswa {
	private:
		string nama[100];
		int npm[100];
	public:
		void setnama(string a[], int s) {
			for(int i = 0; i < 5; i++) {
				nama[i] = a[i];
			}
		}
		void setnpm(int p[], int m) {
			for(int i = 0; i < 5; i++) {
				npm[i] = p[i];
			}
		}
		string getnama(int i) { 
			return nama[i];
		}
		int getnpm(int i) { 
			return npm[i];
		}
};

int main() {
	Mahasiswa Data;
	string a[100];
	int n[100], m;
	
	cout<<"banyak mahasiswa: ";
	cin>> m;
	
	
	for(int i = 0; i < m; i++) {
		cout << "Masukkan nama mahasiswa ke " << i+1 << ": ";
		cin >> a[i];
		cout << "Masukkan NPM mahasiswa ke " << i+1 << ": ";
		cin >> n[i];
	}
	
	Data.setnama(a, m);
	Data.setnpm(n, m);
	
	cout<<endl<<endl;
	
	for(int i = 0; i < m; i++) {
		cout << "Nama mahasiswa ke-" << i+1 << ": " << Data.getnama(i) << endl;
		cout << "NPM mahasiswa ke-" << i+1 << ": " << Data.getnpm(i) << endl;
	}
	return 0;
}
