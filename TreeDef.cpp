#include "TreeDef.hpp"
#include <iostream>
#include <stack>

using namespace std;

TreeNode::TreeNode(int val)
{
    value = val;
    left = NULL;
    right = NULL;
}
TreeNode * TreeNode::getLeft() {
    return left;
}

TreeNode * TreeNode::getRight() {
    return right;
}

void TreeNode::setRight(TreeNode *node){
    this->right = node;
}

void TreeNode::setLeft(TreeNode *node){
    this->left = node;
}

int TreeNode::getValue(){
    return this->value;
}

void TreeNode::setValue(int value){
    value=value;
}



int recursivePreOrderTraversal(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    cout<<root->getValue()<<endl;
    recursivePreOrderTraversal(root->getLeft());
    recursivePreOrderTraversal(root->getRight());
    return 0;
}

int nonRecursivePreOrderTraversal(TreeNode *root) {
    cout<<"\nNON RECURSIVE PRE ORDER TRVERSAL"<<endl;
    stack<TreeNode*> mystack;
    int count = 0;
    while(true) {
        count++;
        if (count > 20) {
            cout<<"Count reached greater than 10.. quitting"<<endl;
            break;
        }
        while (root!= NULL) {
            cout<<root->getValue()<<endl;
            mystack.push(root);
            root = root->getLeft();
        }
        if (mystack.empty()) {
            break;
        }
        else {
            root = mystack.top();
            mystack.pop();
            root = root->getRight();
        }
    }
    return 0;
}

int recursiveInOrderTraversal(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    else {
        recursiveInOrderTraversal(root->getLeft());
        cout<<root->getValue()<<endl;
        recursiveInOrderTraversal(root->getRight());
    }
    return 0;

}

int nonRecursiveInOrderTraversal(TreeNode *root) {
    cout<<"\nNON RECURSIVE IN ORDER TRVERSAL"<<endl;
    stack<TreeNode*> mystack;
    int count = 0;
    while(true) {
        count++;
        if (count > 20) {
            cout<<"Count reached greater than 10.. quitting"<<endl;
            break;
        }
        while (root!= NULL) {
            mystack.push(root);
            root = root->getLeft();
        }
        if (mystack.empty()) {
            break;
        }
        else {
            root = mystack.top();
            mystack.pop();
            cout<<root->getValue()<<endl;
            root = root->getRight();
        }
    }
    return 0;
}

int recursivePostOrderTraversal(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    else {
        recursivePostOrderTraversal(root->getLeft());
        recursivePostOrderTraversal(root->getRight());
        cout<<root->getValue()<<endl;
    }
    return 0;
}

int nonRecursivePostOrderTraversal(TreeNode *root) {
    cout<<"\nNON RECURSIVE POST ORDER TRAVERSAL"<<endl;
    stack<TreeNode*> mystack;
    int count = 0;
    do{
        while (root) {
            if (root->getRight()) {
                mystack.push(root->getRight());
            }
            mystack.push(root);
            root = root->getLeft();
        }
        root = mystack.top();
        mystack.pop();
        if (!mystack.empty()) {
            if ((root->getRight()) && (root->getRight() == mystack.top())) {
                mystack.pop();
                mystack.push(root);
                root = root->getRight();
            } else {
                cout << root->getValue() << endl;
                root = NULL;
            }
        }
        else {
            if (root!= NULL) {
                cout<<root->getValue()<<endl;
                root = NULL;
            }
        }
    }while(!mystack.empty());
    return 0;
}



