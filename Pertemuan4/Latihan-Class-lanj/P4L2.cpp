#include <iostream>
using namespace std;

class laptop{
		private : 
			string pemilik;
			string merk;
		public:
			laptop(string var1, string var2){
				pemilik = var1;
				merk = var2;
				
				cout<<"Paket Laptop "<<merk<<" milik "<<pemilik<<" sudah dikirim"<<endl;
			}
};

int main(){
	laptop laptofadlan("Fadlan","Asus");
	laptop laptoprisma("Risma","Acer");
	laptop laptopcharlos("Carlos", "Lenovo");
	
	return 0;
}

