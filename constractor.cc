#include <iostream>
using namespace std;
class Student
{
private:
    int roll;

public:
    string name;
    // default
    Student()
    {
        cout << "constructor called" << endl;
    }
    // parameterized
    Student(string n)
    {
        name = n;
        cout << "parameterized constructor called" << endl;
    }
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

    Student s1;
    Student s2("minhaj");
    s2.setRoll(13);
    cout << s2.getRoll();
}