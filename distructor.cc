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
    ~Student()
    {
        cout << "Distructor called ." << endl;
    }
};
int main()
{

    Student s1;
    Student s2("minhaj");
    s2.result();
    // copy constructor
    Student s3(s2);

    Student s6 = s3; // eye copy constructor ka kam karega.
    s6.result();
    // Student s3("tapader");
    s3 = s2; // copy assignment constructor
    s3.result();
    // dynamic memory allocation ka liye distructor tob call hoga jab delete keyword use kar ke object ko delete korunga.
    Student *s4 = new Student("muhammod");
    delete s4;
}