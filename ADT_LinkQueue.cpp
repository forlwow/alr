#include "stdlib.h"
using namespace std;

typedef struct Qnode
{
    int data;
    struct Qnode *next;
} QNode, *QueuePtr;

typedef struct{
    QueuePtr front;
    QueuePtr rear;
} LinkQueue;

LinkQueue IniQueue(void)
{
    LinkQueue que;
    QNode node;
    node.data = NULL;
    que.front = que.rear = &node;
    return que;
}

int Append(LinkQueue *p, int e)
{
    QNode tmp;
    tmp.data = e;
    tmp.next = NULL;
    p->rear = &tmp;
    return 1;
}

int pop(LinkQueue *p)
{
    if (p->front == p->rear)
    {
        return 0;
    }
    QueuePtr tmp = p->front;
    p->front = p->front->next;
    free(p);
}
