#include <iostream>
using namespace std;

int main(){
	int a[105], c;
	
	cout<<"x : ";
	for(int i = 0; i < 4; i++){
		cin>>a[i];
	}
	
	for(int j = 0; j < 4; j++){
		cout<<"Tahap "<< j+1 << " : ";
			for(int k = 0; k < 4-1; k++){
				if(a[k] > a[k+1]){
					c = a[k];
					a[k] = a[k+1];
					a[k+1] = c;
				}
			}
			for(int l = 0; l < 4; l++){
				cout<<a[l]<<" ";
			}
		cout<<endl;
	}
	
	cout<<"Hasil : ";
		for(int k = 0; k < 4; k++){
			if(a[k] > a[k+1]){
				c = a[k];
				a[k] = a[k+1];
				a[k+1] = c;
			}
			cout<<a[k]<<" ";
		}
}
