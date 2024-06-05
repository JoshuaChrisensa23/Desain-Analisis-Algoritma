#include <iostream>
using namespace std;

const int MAXI = 1000;
int phn[MAXI];
int cr = 0;

void masuk(int z){
//	int cr = 0;
//	while(phn[cr] != -1){
//		if(z < phn[cr]){
//			cr = 2 * cr + 1;
//		}else{
//			cr = 2 * cr + 2;
//		}
//	}
	phn[cr] = z;
	cr++;
}

void preorder(int cr){
	if(phn[cr] != -1){
		cout<<phn[cr]<<" ";
		preorder(2 * cr + 1);
		preorder(2 * cr + 2);
	}
}

void inorder(int cr){
	if(phn[cr] != -1){
		inorder(2 * cr + 1);
		cout<<phn[cr]<<" ";
		inorder(2 * cr + 2);
	}
}

void postorder(int cr){
	if(phn[cr] != -1){
		postorder(2 * cr + 1);
		postorder(2 * cr + 2);
		cout<<phn[cr]<<" ";
	}
}

int main (){
	for(int i = 0; i < MAXI; i++){
		phn[i] = -1;
	}
	
	char p;
	int a;
	
//	int ph[] = {18, 30, 33, 29, 32};
//	int size = sizeof(ph) / sizeof(ph[0]);
//	
//	for(int i = 0; i < size; i++){
//		phn[i] = ph[i];
//	}
	
	do{
		cout<<"Masukan nilai pada binary tree ";
		cin>>a;
		masuk(a);
		cout<<"Ingin masukan nilai lain(Y/N)? ";
		cin>>p;
	}while(p == 'y' || p == 'Y');
	
	cout<<endl;
	cout<<"Pre-Order Traversal: ";
	preorder(0);
	cout<<endl;
	cout<<"In-Order Traversal: ";
	inorder(0);
	cout<<endl;
	cout<<"Post-Order Traversal: ";
	postorder(0);
	cout<<endl;
}
