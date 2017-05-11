//
// Created by Ashwath Sriram on 5/10/17.
//

#ifndef UNTITLED_TREEDEF_HPP
#define UNTITLED_TREEDEF_HPP

class TreeNode {
private:
    int value;
    TreeNode *left;
    TreeNode *right;

public:

    TreeNode(int);
    TreeNode * getLeft();
    TreeNode * getRight();
    void setLeft(TreeNode*);
    void setRight(TreeNode*);
    void setValue(int);
    int getValue();

};
int recursivePreOrderTraversal(TreeNode *);
int nonRecursivePreOrderTraversal(TreeNode *);
int recursiveInOrderTraversal(TreeNode *);
int nonRecursiveInOrderTraversal(TreeNode *);
int recursivePostOrderTraversal(TreeNode *);
int nonRecursivePostOrderTraversal(TreeNode *);
#endif //UNTITLED_TREEDEF_H
