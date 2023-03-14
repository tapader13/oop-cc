#include <iostream>
using namespace std;
class Initialization
{
public:
    int const roll;
    int age;

    Initialization(int r, int a) : roll(r), age(a)
    {
    }
    void display()
    {
        cout << roll << "    " << age << endl;
    }
};
int main()
{
    Initialization i(13, 22);
    i.display();
}