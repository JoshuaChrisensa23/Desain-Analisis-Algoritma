#include <iostream>
using namespace std;

class karyawan{
	private:
		long long gaji;
		int umur;
		string nama;
		
	public:
		karyawan( string c, int a, long int b){
			nama = c;
			umur = a;
			gaji = b;
		}
		
		void setnama(string c){
			nama = c;
		}
		
		void setumur(int a ){
			umur = a;
		}
		
		void setgaji(long int b){
			gaji = b;
		}
		
		long long getgaji(){
			return gaji;
		}
		
		int getumur(){
			return umur;
		}
		
		string getnama(){
			return nama;
		}
		
};

int main(){
	long long gaji,umur;
	string nama;
	
	cout<<"Masukan nama : ";
	getline (cin, nama);
	cout<<"Masukan umur : ";
	cin >> umur;
	cout<<"Masukan gaji : ";
	cin >> gaji;
	
	karyawan biodata(nama, umur, gaji);
	
	biodata.setnama(nama);
	biodata.setumur(umur);
	biodata.setgaji(gaji);
	
	cout << "\nData Karyawan: " << endl;
	cout << "Nama: " << biodata.getnama() << endl;
	cout << "Umur: " << biodata.getumur() << endl;
	cout << "Gaji: Rp " << biodata.getgaji() << endl;

	
}


