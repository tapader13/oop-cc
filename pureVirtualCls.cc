#include <iostream>
using namespace std;
class num
{
public:
    int roll;
    int age;
    virtual void print() = 0;
};

int main()
{
    // pure virtual function ko object nehi bana sakta.
    // pure virtual function ko jis class me rakte ho uss class ko abstract class bolte hea.
    // jis class me sara virtual method rakte hea usko pure abstract class bolte hea.