#include <iostream>
using namespace std;
class assingment
{
    int a;

public:
    void gIp()
    {
        cout << "Enter input value : " << endl;
        cin >> a;
    }
    void pOp()
    {
        cout << "A is : " << a << endl;
    }
    void operator-=(assingment b)
    {
        a = a - b.a;
    }
};
int main()
{
    assingment a, b;
    a.gIp();
    b.gIp();
    // aa.pOp();
    // bb.pOp();
    a -= b;
    a.pOp();
    return 0;
}