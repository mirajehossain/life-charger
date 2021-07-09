// find the height of a binary tree

/***
 * @brief      - Find the height of a binary tree
 * @param      - root: root of the binary tree
 * @return     - integer: height of the binary tree
 * 3 5 2 1 4 6 7
 *          3
 *       5    2
 *   1   4   6   7
 **/
// Time Complexity: O(n)
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

int heightOfBinaryTree(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int leftHeight = heightOfBinaryTree(root->left);
    int rightHeight = heightOfBinaryTree(root->right);
    return (leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1);
}

int main()
{
    Node *root = new Node(3);
    Node *node1 = new Node(5);
    Node *node2 = new Node(2);
    Node *node3 = new Node(1);
    Node *node4 = new Node(4);
    Node *node5 = new Node(6);
    Node *node6 = new Node(7);

    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node5;
    node2->right = node6;

    cout << heightOfBinaryTree(root) << endl;
}
