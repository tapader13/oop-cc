#include <iostream>
using namespace std;
class overriding1
{

public:
    void pOutput()
    {
        cout << "******** 1. base class ********" << endl;
    }
};
class overriding2 : public overriding1
{

public:
    void pOutput()
    {
        cout << "******** 2. derived class ********" << endl;
        overriding1::pOutput();
    }
};
int main()
{

    overriding2 display;
    display.pOutput();
    display.overriding1::pOutput();
}
