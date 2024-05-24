#include <iostream>
#include <string.h>
using namespace std;

class perut{
	private:
		string makan[5], fuyo;
		int dt, knds, td;
		
	public:
		perut(){
			dt = -1;
			knds = -1;
			td = -1;
		}
		
		bool isfull(){
			return (dt == 5);
		}
		
		bool isempty(){
			return (td == -1 || td > dt);
		}
		
		void mamam(string aum){
			if(isfull()){
				cout<<"Perut Kenyang, ahhhh"<<endl;
			}
			if(td == -1) td = 0;
			
				makan[++dt] = aum;
				knds++;
				cout<<makan[dt]<<" dimakan"<<endl;	
		}
		
		void prrt(){
			if(isempty()){
				cout<<"Perut Kosong, LAPARR!!!!"<<endl;
				return; 
			}
			cout<<"Memakan "<<makan[td++]<<".\n";
			if(td > dt){
				td = dt = -1;				
			}
		}
		
		void cek(){
			if(isempty()){
				cout<<"Perut Kosong, LAPARR!!!!"<<endl;
			}
			else{
				for(int j = 0; j < knds + 1; j++){
					cout<<makan[j]<<" ";
				}
				cout<<endl;
			}
		}
		
};

int main(){
	perut prt;
	int a;
	string b;
	
	do{
		cout<<"1. Makan Makanan Baru"<<endl
			<<"2. Cerna Makanan"<<endl
			<<"3. Mengingat Makanan apa"<<endl
			<<"4. Exit sistem"<<endl<<"Pilih Opsi: ";
		cin>>a;
		
		switch(a){
			case 1:
				cout<<"Masukkan makan: ";
				cin>>b;
				prt.mamam(b);
				break;
			case 2:
				prt.prrt();
				break;
			case 3:
				prt.cek();
				break;
		}
	}
	while(a < 4);
}
