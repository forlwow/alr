#include "stdlib.h"
#include "iostream"
#include "vector"

using namespace std;

vector<int> CreateList(void)
{
    cin.clear();
    int a;
    vector<int> li;
    while (cin >> a)
    {
        li.push_back(a);
    }
    return li;
}

vector<int> merge(vector<int> *la, vector<int> * lb)
{
    auto ia = la->begin();
    auto ib = lb->begin();
    vector<int> res;
    while (ia != la->end() & ib != lb->end())
    {
        if (*ia > *ib)
        {
            res.push_back(*ib);
            ib++;
        }
        else
        {
            res.push_back(*ia);
            ia++;
        }
    }
    while (ia != la->end())
    {
        res.push_back(*ia);
        ia++;
    }
    while (ib != lb->end())
    {
        res.push_back(*ib);
        ib++;
    }
    return res;
}

void Print(vector<int>* li)
{
    for (auto i = li->begin(); i != li->end(); i++)    
    {
        cout << *i << ", ";
    }
    cout << endl;
}

void NumSort(vector<int> &li)
{
    int i = 0;
    int j = li.size() - 1;
    int tmp;
    while (i < j)
    {
        if (li[i] & 1) // 为奇数
        {
            tmp = li[i];
            li[i] = li[j];
            li[j] = tmp;
            j--;
        }
        else
        {
            i++;
        }
    }
    
}

int main()
{
    // 1
    // vector<int> liA = CreateList();
    // vector<int> liB = CreateList();
    // vector<int> liC = merge(&liA, &liB);
    
    // Print(&liA);
    // Print(&liB);
    // Print(&liC);

    // 2
    vector<int> liD = CreateList();
    NumSort(liD);
    Print(&liD);
    cout << "OK" << endl;
    return 0;
}
