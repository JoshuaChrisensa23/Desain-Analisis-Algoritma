#include <iostream>
#include <string.h>
using namespace std;

class mahasiswa{
	protected:
		string nama_, jurusan_, fakultas_, status_;
		int umur_;
	public:
		virtual void setinfo(string a, int b, string c, string d){
			nama_ = "...";
			umur_ = 0;
			jurusan_ = "...";
			fakultas_ = "...";
			status_ = "...";
		}
		
		virtual void getinfo(){
			cout<<"Nama    : "<<nama_<<endl
				<<"umur    : "<<umur_<<endl
				<<"Status  : "<<status_<<endl
				<<"Jurusan : "<<jurusan_<<endl
				<<"Fakultas: "<<fakultas_<<endl;
				
		}
};

class aktif : public mahasiswa{
	public:
		void setinfo(string a, int b, string c, string d){
			nama_ = a;
			umur_ = b;
			jurusan_ = c;
			fakultas_ = d;
			status_ = "Mahasiswa Aktif";
		}
		
		void getinfo(){
			cout<<"Nama    : "<<nama_<<endl
				<<"umur    : "<<umur_<<endl
				<<"Status  : "<<status_<<endl
				<<"Jurusan : "<<jurusan_<<endl
				<<"Fakultas: "<<fakultas_<<endl;
				
		}
};

class alumni : public mahasiswa{
	public:
		void setinfo(string a, int b, string c, string d){
			nama_ = a;
			umur_ = b;
			jurusan_ = c;
			fakultas_ = d;
			status_ = "Alumni";
		}
		
		void getinfo(){
			cout<<"Nama    : "<<nama_<<endl
				<<"umur    : "<<umur_<<endl
				<<"Status  : "<<status_<<endl
				<<"Jurusan : "<<jurusan_<<endl
				<<"Fakultas: "<<fakultas_<<endl;
				
		}
};

int main(){
	int a, b;
	string c, d[100], g, e, f;
	
	cout<<"Masukan Jumlah Data: ";
	cin>>a;
	
	aktif mhsaktf[100];
	alumni almn[100];
	
	for(int i = 0; i < a; i++){
		cout<<"\nData Mahasiswa ke-"<<i+1<<endl
			<<"Masukan Nama: ";
		getline(cin>>ws, c);
		cout<<"Masukan Umur: ";
		cin>>b;
		cout<<"Masukan Status: ";
		getline(cin>>ws, g);
		d[i] = g;
		cout<<"Masukan Jurusan: ";
		getline(cin>>ws, e);
		cout<<"Masukan Fakultas: ";
		getline(cin>>ws, f);
		
		if(d[i] == "Aktif" || d[i] == "Mahasiswa Aktif" || d[i] == "aktif" || d[i] == "mahasiswa aktif"){
			mhsaktf[i].setinfo(c,b,e,f);
		}else if(d[i] == "alumni" || d[i] == "Alumni"){
			almn[i].setinfo(c,b,e,f);
		}
		
	}
	
	for(int j = 0; j < a; j++){
		cout<<"\nData Mahasiswa ke-"<<j+1<<endl;
		if(d[j] == "Aktif" || d[j] == "Mahasiswa Aktif" || d[j] == "aktif" || d[j] == "mahasiswa aktif"){
			mhsaktf[j].getinfo();
		}else if(d[j] == "alumni" || d[j] == "Alumni"){
			almn[j].getinfo();
		}else{
			cout<<"!ERROR"<<endl;
		}
	}
	
}

