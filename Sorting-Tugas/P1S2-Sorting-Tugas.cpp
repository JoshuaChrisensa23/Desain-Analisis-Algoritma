#include <iostream>
using namespace std;

int main(){	
// -----------------------------------------------------
//			Insertion Sort
// -----------------------------------------------------

	int arr[100], x, temp;
	
	cout<<"Masukan jumlah array : ";
	cin>>x;
	
	for(int i = 0; i < x; i++){
		cout<<"Masukan angka ke-"<<i+1<<" : ";
		cin>>arr[i];
		cout<<endl;
	}
	
	for(int i = 1; i < x; i++){
		for(int j = i; j > 0; j--){
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}else{
				break;
			}
		}
		cout<<"Proses sorting \n ";
		for(int i = 0; i < x; i++){
			cout<<arr[i]<<" ";	
		}
		cout<<endl;
	}
	

		cout<<"\n\nHasil sorting \n ";
		for(int i = 0; i < x; i++){
			cout<<arr[i];	
		}
		
	cout<<endl<<endl;
// -----------------------------------------------------
//			Selection Sort
// -----------------------------------------------------
	
	int a, b, ar[100];
	cout<<"Masukan jumlah array : ";
	cin>>a;
	
	cout<<"Masukan nilai elemen : ";
	for(int i = 0; i < a; i++){
		cin>>ar[i];
	}
	
	cout<<"Data sebelum di Sorting : ";
	for(int i = 0; i < a; i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	for(int i = 0;i < a-1; i++){
		int s = i;
		b = ar[i];
		for(int j = i+1; j < a; j++){
			if(ar[j] < ar[s]){
				s = j;
				b = ar[j];
			}
		}
		if (s != i){
			b = ar[i];
			ar[i] = ar[s];
			ar[s] = b;
		}
		
		cout<<"Iterasi ke-"<<i<<" : ";
		for(int k = 0; k < a; k++){
			cout<<ar[k]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nData setelah sorting : ";
	for(int i = 0; i < a; i ++){
		cout<<ar[i]<<" ";
	}
	
}
