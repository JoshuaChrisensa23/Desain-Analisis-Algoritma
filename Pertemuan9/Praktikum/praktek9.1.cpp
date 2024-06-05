#include <iostream>
using namespace std;

const int MAX = 100;
int tr[MAX];
int a;

struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int value) : data(value), left(NULL), right(NULL) {}
	
};

int main(){
 	int tr[] = {1,2,3,4,5};
 	
	TreeNode* root = new TreeNode(tr[0]);
	root->left = new TreeNode(tr[1]);
	root->right = new TreeNode(tr[2]);
	root->left->left = new TreeNode(tr[3]);
	root->left->right = new TreeNode(tr[4]);
	
	cout<<"Nilai simpul-simpul pohon: "<<endl;
	cout<<"Akar: "<<root->data<<endl;
	cout<<"Anak Kiri dari Akar: "<<root->left->data<<endl;
	cout<<"Anak Kanan dari Akar: "<<root->right->data<<endl;
	cout<<"Anak Kiri dari Anak Kiri dari Akar: "<<root->left->left->data<<endl;
	cout<<"Anak Kanan dari Anak Kiri dari Akar: "<<root->left->right->data<<endl;
	
	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;
	
	return 0;
}
