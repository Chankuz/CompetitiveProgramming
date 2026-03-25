#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Function to create a new node
Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

// Function to insert a node in a binary search tree (BST)
void insert(Node *&root, int data)
{
    if (root == nullptr)
    {
        root = newNode(data);
        return;
    }

    if (data < root->data)
    {
        insert(root->left, data);
    }
    else
    {
        insert(root->right, data);
    }
}

// Function for inorder traversal (left, root, right)
void inorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    Node *root = nullptr;

    insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 8);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
