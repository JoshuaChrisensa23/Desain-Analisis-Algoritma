#include <iostream>
using namespace std;

class contoh {
	private:
		int nilai; //deklarasi variabel didalam class
	public:
		contoh(int n){ //mendapatkan nilai dari int main, melalui perintah constructor
			nilai = n; //mengambil nilai untuk diletakan pada varabel dalam class
		}
		
		int getnum(){
			return nilai; //mengembalikan nilai varibel untuk ditampilkan
		}
};

int main(){
	contoh obj(10); //memberikan nilai pada class dan constructor
	cout<<"Nilai yang di input: "<<obj.getnum()<<endl; //menampilkan nilai yang diberikan
	
	return 0;
}
