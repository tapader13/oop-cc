#include <iostream>
using namespace std;
class name
{
public:
    virtual void p1()
    {
        cout << "Print name" << endl;
    }
};
class bazar : public name
{
public:
    void p1()
    {
        cout << "Print bazar" << endl;
    }
};
class home : public bazar
{
public:
    void p1()
    {
        cout << "Print home" << endl;
    }
};
void combined(name &op)
{
    op.p1();
}
int main()
{

    home cl3;
    cl3.p1();

    combined(cl3);
    return 0;
}