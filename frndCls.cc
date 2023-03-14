#include <iostream>
using namespace std;
class parts
{
public:
    void print();
};
class human
{
private:
    int roll;
    string bazar;

public:
    friend void parts::print();
};
void parts::print()
{
    human h;
    h.bazar = "zakigonj";
    cout << h.bazar;
}
int main()
{
    parts p;
    p.print();
}
