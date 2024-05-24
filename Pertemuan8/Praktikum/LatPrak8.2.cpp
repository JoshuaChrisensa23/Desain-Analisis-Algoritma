#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

class queue{
	private:
		int front, rear, count;
		int arr[MAX];
		
	public:
		queue(){
			front = 0;
			rear = MAX - 1;
			count = 0;
		}
		
		void enqueue(int x){
			if(count >= MAX){
				cout<<"Antrian penuh."<<endl;
				return;
			}
			rear = (rear + 1) % MAX;
			arr[rear] = x;
			count++;
		}
		
		int dequeue(){
			if(count <= 0){
				cout<<"Antrian kosong." << endl;
				return -1;
			}
			
			int x = arr[front];
			front == (front + 1) % MAX;
			count--;
			return x;
		}
		
		int peek(){
			if(count <= 0){
				cout<<"Antrian kosong."<<endl;
				return -1;
			}
			return arr[front];
		}
		
		int size(){
			return count;
		}
		
		bool isempty(){
			return count == 0;
		}
		
		bool isfull(){
			return count == MAX;
		}
};

int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(1);
	q.enqueue(1);
	
	cout<<"ukuran antrian: "<<q.size()<<endl
		<<"elemen pertama: "<<q.peek()<<endl
		<<"elemen ke dua: "<<q.peek()<<endl
		<<"elemen keluar: "<<q.dequeue()<<endl
		<<"elemen pertama: "<<q.peek()<<endl
		<<"elemen antrian: "<<q.size()<<endl;
	
	return 0;
}
