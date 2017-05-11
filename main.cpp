#include <iostream>
#include "TreeDef.hpp"
using namespace std;
/*
TreeNode create_tree() {
    TreeNode *node1 = &TreeNode(1);
    TreeNode *node2 = &TreeNode(2);
    TreeNode *node3 = &TreeNode(3);
    TreeNode *node4 = &TreeNode(4);
    TreeNode *node5 = &TreeNode(5);
    TreeNode *node6 = &TreeNode(6);
    if (node1->getRight() == NULL) {
        cout << "PASS" << endl;
    }
    node1->setLeft(node2);
    node1->setRight(node3);
    node2->setLeft(node4);
    node2->setRight(node5);
    node3->setLeft(node6);
    return node1;
}*/

int main() {
    //Create a configuration
    TreeNode node1 = TreeNode(1);
    TreeNode node2 = TreeNode(2);
    TreeNode node3 = TreeNode(3);
    TreeNode node4 = TreeNode(4);
    TreeNode node5 = TreeNode(5);
    TreeNode node6 = TreeNode(6);
    node1.setLeft(&node2);
    node1.setRight(&node3);
    node2.setLeft(&node4);
    node2.setRight(&node5);
    node3.setLeft(&node6);

    //cout<<node1.getRight()->getValue()<<endl;
    TreeNode *temp = &node1;
    cout<<"RECURSIVE PRE ORDER TRAVERSAL"<<endl;
    recursivePreOrderTraversal(temp);
    nonRecursivePreOrderTraversal(temp);
    cout<<"RECURSIVE IN ORDER TRAVERSAL"<<endl;
    recursiveInOrderTraversal(temp);
    nonRecursiveInOrderTraversal(temp);
    cout<<"RECURSIVE POST ORDER TRAVERSAL"<<endl;
    recursivePostOrderTraversal(temp);
    nonRecursivePostOrderTraversal(temp);
    return 0;
}