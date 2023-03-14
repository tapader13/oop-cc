#include <iostream>
using namespace std;
class num
{
public:
    int roll;
    int age;
    static int total;
    num()
    {
        total++;
    }
};
int num::total = 0;
int main()
{
    num i, i1, i2;
    cout << num::total;
}