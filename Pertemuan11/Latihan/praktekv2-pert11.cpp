#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int M = 4;
class GRAF{
		int jmlhsmpl;
		vector<vector<int> > adjas;
	public:
		GRAF(int simpul);
		void tmbhtepi(int src, int des);
		void display();
};

GRAF::GRAF(int simpul){
		jmlhsmpl = simpul;
		adjas.resize(simpul);
}

void GRAF::tmbhtepi(int src, int dest){
	adjas[src].push_back(dest);
}
		
void GRAF::display(){
	for(int i = 0; i < jmlhsmpl; ++i){
		cout<<"Daftar tetangga simpul "<<i<<" : ";
		for(size_t j = 0; j < adjas[i].size(); ++j){
			cout<<adjas[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	GRAF gra(4);
	
	gra.tmbhtepi(0, 1);
	gra.tmbhtepi(0, 2);
	gra.tmbhtepi(1, 2);
	gra.tmbhtepi(2, 0);
	gra.tmbhtepi(2, 3);
	gra.tmbhtepi(3, 3);
	
	cout<<"Representasi graf menggunakan daftar adjasi: "<<endl;
	gra.display();
}
