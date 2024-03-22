#include <iostream>
using namespace std;

int part(int arr[], int low, int high){
	int piv = arr[high];
	int i = (low - 1);
	
	for(int j = low; j <= high - 1; j++){
		if(arr[j] >= piv){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return (i+1);
}

void qs(int arr[], int low, int high){
	if(low < high){
		int pi = part(arr, low, high);
		
		qs(arr, low, pi-1);
		qs(arr, pi+1, high);
	}
}

int main(){
	int arr[100], n;
	
	cout<<"Masukan 5 elemen : ";
	for(int i = 0; i < 5; i++){
		cin>>arr[i];
	}
	
	cout<<"\nArray sebelum diurutkan : ";
	for(int i = 0; i < 5; i++){
		cout<<arr[i];
	}
	
	qs(arr, 0, 5-1);
	
	cout<<"\nArray setelah diurutkan : ";
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
}
