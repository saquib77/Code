#include <bits/stdc++.h>
using namespace std;
class demo
{
private:
    string x = "Naggaro";
    friend string getter();
};
string getter()
{
    demo d;
    string k = d.x;
    return k;
}
int main()
{
    cout << getter() << endl;
    return 0;
}