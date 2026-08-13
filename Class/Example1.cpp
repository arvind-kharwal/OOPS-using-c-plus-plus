#include <iostream>
using namespace std;
class Example
{
private:
    int a, b;

public:
    void getdata();
    void print();
};

void Example::getdata()
{
    cout << "Enter the data: ";
    cin >> a >> b;
}
void Example::print()
{
    cout << "The numbers are: " << a << " " << b << "\n";
}

int main()
{
    Example E1;
    E1.getdata();
    E1.print();
    return 0;
}