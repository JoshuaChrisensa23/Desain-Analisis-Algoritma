#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main(){
// -----------------------------------------------------
//			Descending Bubble Sort
// -----------------------------------------------------
	
//	int x, y, z[100];
//	
//	cout<<"Jumlah Index : ";
//	cin>>y;
//	
//	cout<<"x : ";
//	for(int i = 0; i < y; i++){
//		cin>>z[i];
//	}
//	
//	for(int j = 0; j < 4; j++){
//		cout<<"Tahap "<< j+1 << " : ";
//			for(int k = j+1; k < y; k++){
//				if(z[j] < z[k]){
//					x = z[j];
//					z[j] = z[k];
//					z[k] = x;
//				}
//			}
//			for(int l = 0; l < y; l++){
//				cout<<z[l]<<" ";
//			}
//		cout<<endl;
//	}
//	
//	
//	cout<<"Hasil : ";
//	for(int k = 0; k < y; k++){
//		cout<<z[k]<<" ";
//	}
	
// -----------------------------------------------------
//			Descending Insertion Sort
// -----------------------------------------------------

//	int a, b, c[100];
//	
//	cout<<"Jumlah array : ";
//	cin>>a;
//	
//	cout<<"Array : ";
//	for(int i = 0; i < a; i++){
//		cin>>c[i];
//	}
//	
//	for(int i = 1; i < a; i++){
//		for(int j = i; j > 0; j--){
//			if(c[j] > c[j-1]){
//				b = c[j];
//				c[j] = c[j-1];
//				c[j-1] = b;
//			}else{
//				break;
//			}
//		}
//		cout<<"Proses \n ";
//		for(int i = 0; i < a; i++){
//			cout<<c[i]<<" ";	
//		}
//		cout<<endl;
//	}

// -----------------------------------------------------
//			Descending Selection Sort
// -----------------------------------------------------

//	int q, w, e[100];
//	
//	cout<<"Jumlah index array : ";
//	cin>>w;
//	
//	cout<<"Array : ";
//	for(int i = 0; i < w; i++){
//		cin>>e[i];
//	}
//	
//	for(int i = 0;i < w-1; i++){
//		int s = i;
//		q = e[i];
//		for(int j = i+1; j < w; j++){
//			if(e[j] > e[s]){
//				s = j;
//				q = e[j];
//			}
//		}
//		if (s != i){
//			q = e[i];
//			e[i] = e[s];
//			e[s] = q;
//		}
//		
//		cout<<"Selection sort ke-"<<i<<" : ";
//		for(int k = 0; k < w; k++){
//			cout<<e[k]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\nHasil sorting : ";
//	for(int i = 0; i <w; i ++){
//		cout<<e[i]<<" ";
//	}
	
// -----------------------------------------------------
//			Library Sort
// -----------------------------------------------------	

	char book[100][1000], arr[100], s;
	int jmlh, p, c = 0, m;
	

	do{
		if(c == -1){
			cout<<"=========xxxxxxxxxxx=========";
		}else{
			for(int i = 0; i < c; i++){
				cout<<i+1<<". ========="<<book[i]<<"=========\n";
			}		
		}
		cout<<endl;
		
		cout<<"Enter Book books: ";
		cin>>book[c];
		cout<<"Lanjut atau Tidak : ";
		cin>>s;
		c++;
		system("cls");
	}
	while(s == 'y' || s =='Y');
	
	for(int i = 0; i < c; i++){
		cout<<i+1<<". ========="<<book[i]<<"=========\n";
	}
	cout<<endl<<"================================="<<endl;
	
	for (p = 1; p < c; p++) {
        for (m = 1; m < c; m++) {
            if (strcmp(book[m - 1], book[m]) > 0) {
                strcpy(arr, book[m - 1]);
                strcpy(book[m - 1], book[m]);
                strcpy(book[m], arr);
            }

        }
    }
    
    for (int x = 0; x < 10; x++){
    	cout << book[x] << endl;
	}
    cout << endl;
    return 0;
	
	
}
