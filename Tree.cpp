#include "stdlib.h"
#include "iostream"
typedef struct TNode{
    int data;
    struct TNode *left;
    struct TNode *right;
} TNode, *TNodeLink;

void CreateFromLi(TNode *root, int li[], int index, int length)
{
    if (index >= length) { 
        root->data = NULL;
        root->left = NULL;
        root->right = NULL;
        return; 
    }
    root->data = li[index];
    root->left = new TNode;
    root->right = new TNode;
    CreateFromLi(root->left, li, 2*index+1, length);
    CreateFromLi(root->right, li, 2*index+2, length);
}

void PrintTree(TNode *root)
{
    if (root->data == NULL) { return; }
    PrintTree(root->right);
    PrintTree(root->left);
    printf("%3d", root->data);
}

int main()
{
    TNode root;
    int li[10] = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    CreateFromLi(&root, li, 0, 10);
    PrintTree(&root);
}
