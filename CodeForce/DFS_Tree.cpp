#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

void depthFirstSearch(Node *node)
{
    if (node == nullptr)
    {
        return; // Handle empty subtree case
    }

    cout << node->data << " "; // Process the current node

    // Recursive calls to explore the depth
    depthFirstSearch(node->left);
    depthFirstSearch(node->right);
}

int main()
{
    // Example tree construction
    Node *root = new Node{1};
    root->left = new Node{2};
    root->right = new Node{3};
    root->left->left = new Node{4};
    root->left->right = new Node{5};

    depthFirstSearch(root);
    cout << endl;

    return 0;
}