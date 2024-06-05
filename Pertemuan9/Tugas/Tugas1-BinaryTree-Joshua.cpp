#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int value){
			data = value;
			left = NULL;
			right = NULL;
		}
};

class Tree{
	public:
		Node* root;
		Tree() {root = NULL; }
		
		void insert(int value){
			root = insert (root, value);
		}
		
		Node* insert(Node* node, int value){
			if(node == NULL){
				node = new Node(value);
			}else if(value <= node->data){
				node->left = insert(node->left, value);
			}else{
				node->right = insert(node->right, value);
			}
			return node;
		}
		
		void inorder(){ inorder(root); }
		void inorder(Node* node){
			if(node != NULL){
				inorder(node->left);
				cout<<node->data<<" ";
				inorder(node->right);
			}
		}
		
		void preorder(){ preorder(root); }
		void preorder(Node* node) {
		   	if (node != NULL) {
		    	cout<<node->data<<" ";
		    	preorder(node->left);
		   		preorder(node->right);
			}
		}
		
		void postorder(){ postorder(root); }
		void postorder(Node* node){
		    if (node != NULL){
		    	postorder(node->left);
		    	postorder(node->right);
		    	cout << node->data << " ";
			}  
		}
};

int main(){
	Node* data;
	Tree tr;
	int an, pil;
	
	do{
		cout<<"-------PILIHAN KEGIATAN--------"<<endl
			<<"\t1. Input Data\n"<<"\t2. In-Order\n"
			<<"\t3. Pre-Order\n"<<"\t4. Post-Order\n"
			<<"\t5. EXIT"<<endl;
		cout<<"Pilihan : ";
		cin>>pil;
		if(pil == 1){
			cout<<"Masukan Angka Data: ";
			cin>>an;
			tr.insert(an);
		}else if(pil == 2){
			tr.inorder();
			cout << endl;
		}else if(pil == 3){
			tr.preorder();
			cout << endl;
		}else if(pil == 4){
			tr.postorder();
			cout << endl;
		}
		cout << endl;
	}while(pil < 5);
	
}
