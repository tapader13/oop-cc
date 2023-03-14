#include <iostream>
using namespace std;
void pDetails();
class human
{
private:
    int roll;
    string bazar;

public:
    friend void pDetails();
};

void pDetails()
{
    human h;
    h.bazar = "zakigonj";
    cout << h.bazar;
}
int main()
{
    pDetails();
}
