#include <iostream>
#include <algorithm>
using namespace std;

const int n = 100;
int nim[n];

int binarysearch(int x, int l, int r){
	if(r >= l){
		int mid = l+ (r - 1) /2;
		if(nim[mid] == x){
			return mid;
		}
		if(nim[mid] > x){
			return (x, l, mid - 1);
		}
		else{
			return (x, mid + 1, r);
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"Masukan jumlah mahasiswa: ";
	cin>>n;
	
	cout<<"Masukan NIM mahasiswa:"<<endl;
	for(int i = 0; i < n; i++){
		cin>>nim[i];
	}
	
	sort(nim, nim+n);
	
	int x;
	cout<<"Masukan NIM yang dicari: ";
	cin>>x;
	
	int hasil = binarysearch(x, 0, n-1);
	if(hasil == -1){
		cout<<"NIM tidak ditemukan"<<endl;
	}else{
		cout<<"NIM ditemukan pada indeks "<<hasil<<endl;
	}
	return 0;
	
	
}
