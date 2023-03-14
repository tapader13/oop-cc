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
    void result()
    {
        cout << "Name is " << name << endl;
    }
};
int main()
{

    Student s1;
    Student s2("minhaj");
    s2.result();
    // copy constructor
    Student s3(s2);
    //  copy assignment constructor
    // Student s3("tapader");
    // s3 = s2;
    s3.result();
}
// constructor called when we create object
//  distructor called when scope of object finished