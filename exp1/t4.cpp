#include "iostream"
#include "stdlib.h"
#include "string.h"

using namespace std;

template<class ElemType>
struct Node{
    ElemType data;
    Node* next;
};

template<class ElemType>
class LinkQueue
{
private:
    Node<ElemType>* head;
    Node<ElemType>* tail;
public:
    LinkQueue()
    {
        head = new Node<ElemType>;
        head->next = NULL;
        tail = head;
    }

    ~LinkQueue()
    {
        delete head;
    }

    void push(ElemType e)
    {
        tail->next = new Node<ElemType>;
        tail = tail->next;
        strcpy(tail->data, e);
        tail->next = NULL;
    }

    int pop()
    {
        if (head == tail) {return 0;}
        auto tmp = head->next;
        head->next = head->next->next;
        delete tmp;
        return 1;
    }

    void print()
    {
        Node<ElemType>* cur = head->next;
        while (cur)
        {
            cout << cur->data << "  ";
            cur = cur->next;
        }
        cout << endl;
    }
};

template<class ElemType>
class Queue
{
private:
    int max_num;
    int left = 0, right = 0;
    ElemType data[];

public:
    Queue(int num)
    {
        max_num = num;
        data[max_num];
    }
    ~Queue(void) {}

    bool push_back(int n)
    {
        if ((right + 1) % max_num == left) return 0;
        data[right] = n;
        right = (right + 1) % max_num;
        return 1;
    }

    bool pop_head(void)
    {
        if (right == left) return 0;
        left = (left + 1) % max_num;
        return 1;
    }

    void print_num(void)
    {
        for (int i = left; i < right; i++)
        {
            cout << data[i] << "  ";
        }
        cout << endl;
    }

    // 从键盘输入字符串
    void push_alpha(void)
    {
        int tmp;
        while (cin >> tmp)
        {
            if (tmp > 0)
            {
                this->pop_head();
            }
            else if (tmp < 0)
            {
                this->push_back(tmp);
            }
            else if (tmp == 0)
            {
                break;
            }
        }
        this->print_num();
    }    
};

int main()
{
    // 循环队列
    // Queue<int> q(10);
    // q.push_alpha();
    // 链队列
    LinkQueue<char[10]> q;
    q.push("tom");
    q.push("jack");
    q.push("jim");
    q.pop();

    q.print();
    return 0;
}
