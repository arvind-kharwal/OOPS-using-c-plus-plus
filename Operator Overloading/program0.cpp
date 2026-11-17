#include <iostream>
using namespace std;
class Example
{
    int a;

public:
    Example(int);
    void display();
    Example operator-();
};
Example::Example(int x)
{
    a = x;
}
void Example::display()
{
    cout << a << endl;
}
Example Example::operator-()
{
    Example E1(0);
    E1.a = -a;
}
int main()
{
    Example A(10);
    A.display();
}