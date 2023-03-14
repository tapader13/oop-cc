#include <iostream>
using namespace std;
class Student
{
private:
    int roll;

public:
    string name;
    int getRoll()
    {
        return roll;
    }
    void setRoll(int r)
    {
        roll = r;
    }
};
int main()
{

    Student s2;
    s2.setRoll(13);
    cout << s2.getRoll();
}