#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
};
Node *newNode(int key)
{
    Node *node = new Node;
    node->key=key;
    node->left = node->right = NULL;
    return (node);
}
int btnode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (root->key + btnode(root->left) + btnode(root->right));
}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    cout << "The sum is " << btnode(root);
    return 0;
}