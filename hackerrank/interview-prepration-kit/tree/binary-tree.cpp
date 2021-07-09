// implement a binary tree

/***
 * @author Md Alamin
 * @git: https://github.com/mdlamin/interview-prep/tree/master/cpp/hackerrank/binary-tree
 *          1
 *      2       3
 *    4   5   6   7
 * @author:    crafted by md. alamin
 **/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main()
{
    Node *root = new Node(1);
    Node *node1 = new Node(2);
    Node *node2 = new Node(3);
    Node *node3 = new Node(4);
    Node *node4 = new Node(5);
    Node *node5 = new Node(6);
    Node *node6 = new Node(7);

    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node5;
    node2->right = node6;

    printTree(root);
}
