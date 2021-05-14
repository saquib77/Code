#include <bits/stdc++.h>
using namespace std;
class demo
{
public:
    virtual int add() = 0;
};
class derived : demo
{
public:
    int add()
    {
        return 5 + 5;
    }
};
int main()
{
    derived d;
    cout << d.add();
    return 0;
}