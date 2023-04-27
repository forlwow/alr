#include "stdlib.h"
#include "iostream"
#define ElementType int


using namespace std;
typedef struct node{
    ElementType data;
    node * next;
} List, *LinkList;

List CreateList()
{
    List head;
    LinkList cur = &head;
    cur->next = NULL;
    ElementType d;
    while (cin>>d)
    {
        LinkList node = new List;
        node->data = d;
        node->next = NULL;
        cur->next = node;
        cur = cur->next;
    }
    return head;
}

List CreateStudentList()
{
    List head;
    LinkList cur = &head;
    cur->next = NULL;
    ElementType d;
    int num;
    cin >> num;
    while (num)
    {
        cin >> d;
        LinkList node = new List;
        node->data = d;
        node->next = NULL;
        cur->next = node;
        cur = cur->next;
        num--;
    }
    return head;
}

void Print(LinkList p)
{
    LinkList cur = p->next;
    while (cur != NULL)
    {
        cout << cur->data << "  ";
        cur = cur->next;
    }
    cout << endl;
}

int MaxNode(List &p)
{
    int res = 0, index = 0;
    ElementType max_val = 0;
    LinkList cur = p.next;
    while (cur)
    {
        if (cur->data > max_val)
        {
            res = index;
            max_val = cur->data;
        }
        
        index++;
        cur = cur->next;
    }
    return res;
}

int FindFailure(List& p)
{
    LinkList cur = p.next;
    int res;
    while (cur)
    {
        if  (cur->data < 60) res++;
        cur = cur->next;
    }
    return res;
}

int main()
{
    // List li = CreateList();
    List stu = CreateStudentList();
    // Print(&li);

    // ElementType res = MaxNode(li);
    int res = FindFailure(stu);
    Print(&stu);
    cout << res << endl;


    return 0;
}

