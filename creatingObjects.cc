#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
};
int main()
{
    // statically
    Student s2;
    s2.name = "minhaj";
    cout << s2.name << endl;
    // dynamically
    Student *s1 = new Student;
    s1->roll = 13;
    cout << s1->roll;
}