#include "stdlib.h"
#include "iostream"
#include <stack>
const char alpha[] = "0123456789abcdefghijklmnopqrstuvwxyz";

using namespace std;

// 十进制转任意进制
void ten2any(int p, int num = 2)
{
    stack<int> res;
    while (p)
    {
        res.push(p % num);
        // cout << p%num << endl;
        p /= num;
    }
    while (!res.empty())
    {
        cout << alpha[res.top()];
        res.pop();
    }
    cout << endl;
}

// 判断回文
bool is_huiwen(void)
{
    stack<char> li1;
    stack<char> li2;
    char tmp;
    int length = 0;
    while (cin >> tmp)
    {
        li1.push(tmp);
        length++;
    }
    // 将li1的后半段推入li2
    for (int i = length / 2; i > 0; i--)
    {
        li2.push(li1.top());
        li1.pop();
    }
    // 判断字符串原长度是否为奇数，如果是则将中间数弹出
    if (length & 1) {li1.pop();}
    // 判断前后是否相等
    for (int i = length / 2; i > 0; i--)
    {
        if (li1.top() != li2.top()) {return false;}
        li1.pop();
        li2.pop();
    }
    return true;
}

int main()
{
    // 进制换算
    // int num;
    // cin >> num;
    // ten2any(num);
    // ten2any(num, 8);
    // ten2any(num, 16);

    // 判断回文

    cout << is_huiwen() << endl;
}


