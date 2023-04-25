#include "stdlib.h"
#include "iostream"

using namespace std;

typedef struct Node{
    int data;
    Node* next;
} LNode, *LinkNode;

LNode* CreateList(void)
{
    int a;
    LinkNode head = new LNode;
    head->next = NULL;
    LinkNode cur = head;
    // TODO: cin判断输入
    while (cin >> a)
    {
        LinkNode TNode = new LNode;
        TNode->data = a;
        TNode->next = NULL;
        cur->next = TNode;
        cur = cur->next;
    }
    return head;
}

void PrintNode(LNode* head)
{
    LinkNode cur = head->next;
    while (cur)
    {
        cout << cur->data << endl;
        cur = cur->next;
    }
}

int main()
{
    LinkNode NodeA = CreateList();
    

    return 0;
}
