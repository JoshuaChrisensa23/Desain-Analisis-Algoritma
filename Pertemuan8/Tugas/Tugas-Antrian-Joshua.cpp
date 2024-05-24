#include <iostream>
#include <string.h>
using namespace std;

class Loket{
	private:
		string tiket[5], fuyo;
		int dt, jmlh, td;
		int Max;
		
	public:
		Loket(){
			dt = -1;
			jmlh = 0;
			td = -1;
			Max = 20;
		}
		
		bool isfull(){
			return (dt == 5);
		}
		
		bool isempty(){
			return (td == -1 || td > dt);
		}
		
		void input(string org){
			if(isfull()){
				cout<<"Rame Pengunjung"<<endl;
			}
			if(td == -1) td = 0;
				dt++;
				jmlh++;
				tiket[dt] = org;
				cout<<tiket[dt]<<" masuk antrian"<<endl;	
		}
		void output(){
			if(isempty()){
				cout<<"Sepi Pengunjung"<<endl;
				return; 
			}
			cout<<tiket[td]<<" sudah beli tiket.\n";
			if(td > dt){
				td = dt = -1;				
			}else{
				for(int i = 0; i < jmlh; i++){
					tiket[i] = tiket[i+1];
				}
				jmlh--;
				dt--;
			}
		}
		
		void cek(){
			if(isempty()){
				cout<<"Sepi"<<endl;
			}
			else if(isfull()){
				cout<<"Penuh, pindah loket"<<endl;
			}
			else{
				for(int j = 0; j < jmlh; j++){
					cout<<tiket[j]<<" -> ";
				}
				cout<<endl;
			}
		}
		
};

int main(){
	Loket ant;
	int a;
	string b;
	
	do{
		cout<<"1. Masukan nama pengunjung"<<endl
			<<"2. Keluarkan pengunjung yang sudah beli tiket"<<endl
			<<"3. Lihat Antrian"<<endl
			<<"4. Exit sistem"<<endl<<"Pilih Opsi: ";
		cin>>a;
		
		if(a == 1){
			cin>>b;
			ant.input(b);
		}else if(a == 2){
			ant.output();
		}else if(a == 3){
			ant.cek();
		}
		
	}
	while(a < 4);
}
