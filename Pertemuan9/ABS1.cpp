#include <iostream>
using namespace std;

struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int value) : data(value), left(NULL), right(NULL) {}
	
};

int main(){
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	
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
