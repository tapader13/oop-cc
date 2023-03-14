#include <iostream>
#include <cstring>
using namespace std;
class Copy
{
private:
    char *name;

public:
    Copy(char *n)
    {
        name = n; // ic process ko shallow copy bolte hea.
    }
    // Copy(char *n)
    // {
    //     name = new char[strlen(n) + 1];ic ko kahtey hea deep copy.
    //     strcpy(name, n);
    // }
    void display()
    {
        cout << ".....name is " << name << endl;
    }
};
int main()
{
    char ch[] = "minhaj";
    Copy s(ch);
    s.display();
    ch[3] = 'a';

    s.display();
}