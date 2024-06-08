#include <iostream>
#include <vector>
using namespace std;

class GR{
	private:
		int js;
		vector<vector<int> > mt;
	public:
		GR(int simp){
			js = simp;
			for(int i = 0; i < simp; ++i){
				vector<int> brs(simp, 0);
				mt.push_back(brs);
			}
		}
		
	void Ts(int u, int v){
		if (u >= 0 && u < js && v >= 0 && v < js){
			mt[u][v] = 1;
		}else{
			cout<<"Sisi tidak valid"<<endl;
		}
	}
	
	void hs(int u, int v){
		if (u >= 0 && u < js && v >= 0 && v < js){
			mt[u][v] = 0;
			mt[v][u] = 0;
		}else{
			cout<<"Sisi tidak valid"<<endl;
		}
	}
	
	void dsp(){
		for(int i = 0; i < js; i++){
			cout<<"Simpul "<< i <<" : ";
			for(int j = 0; j < js; j++){
				if(mt[i][j] == 1){
					cout<<" -> "<<j;
				}
			} 
			cout<<endl;
		}
	}
};

int main(){
	int s = 5, a, b;
//	char c;
//	cout<<"Masukan Jumlah Data: ";
//	cin>>s;
	GR G(s);
	
//	do{
//		cout<<"Masukan Source: ";
//		cin>>a;
//		cout<<"Masukan Destination: ";
//		cin>>b;
//		
//		g.Ts(a,b);
//		cout<<"Lanjut?(y/n) "<<endl;
//		cin>>c;
//	}while(c == 'y' || c == 'Y');

	G.Ts(0,1);
	G.Ts(0,4);
	G.Ts(1,2);
	G.Ts(1,3);
	G.Ts(1,4);
	G.Ts(2,3);
	G.Ts(3,4);
	
	cout<<"Matriks Ketetanggaan: "<<endl;
	G.dsp();
	
	return 0;
}
