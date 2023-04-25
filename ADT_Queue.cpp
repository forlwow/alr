#define QueueSize 100

typedef struct ADT_Queue
{
    /* data */
    int data[QueueSize];
    int front;
    int rear;
} SqQueue;


void InitQueue(SqQueue *qu)
{
    qu->rear = qu->front = 0;
}

int EnQueue(SqQueue *qu, int e)
{
    if ((qu->rear + 1) % QueueSize == qu->front)
    {
        return 0;
    }
    qu->data[qu->rear] = e;
    qu->rear = (qu->rear + 1) % QueueSize;
    return 1;
}

int DeQueue(SqQueue *qu, int e)
{
    if (qu->front == qu->rear)
    {
        return 0;
    }
    qu->front = (qu->front + 1) % QueueSize;
    return 1;
}

int GetHead(SqQueue qu, int *e)
{
    if (qu.rear == qu.front)
    {
        return 0;
    }
    *e = qu.data[qu.front];
    return 1;
}

int QueueEmpty(SqQueue qu)
{
    if (qu.front == qu.rear)
    {       
        return 1;
    }
    return 0;
}


