#include <iostream>
using namespace std;

// Function to perform inorder traversal of the binary tree represented as an array
void inorderTraversal(int tree[], int size, int index) {
    if (index >= size || tree[index] == -1) // Check if the index is valid or if it's a null node (-1)
        return;

    // Traverse the left subtree
    inorderTraversal(tree, size, 2 * index + 1);

    // Visit the current node
    cout << tree[index] << " ";

    // Traverse the right subtree
    inorderTraversal(tree, size, 2 * index + 2);
}

int main() {
    // Example binary tree represented as an array
    int tree[] = {18, 30, 33, 29, 32};
    int size = sizeof(tree) / sizeof(tree[0]);

    cout << "Inorder Traversal: ";
    inorderTraversal(tree, size, 0); // Start traversal from the root (index 0)

    return 0;
}

