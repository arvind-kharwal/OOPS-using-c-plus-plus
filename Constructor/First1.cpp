#include <iostream>
using namespace std;
class Student
{
    string name;
    static int count;

public:
    Student(string);
    void display();
};
Student::Student(string n)
{
    name = n;
    count++;
}
void Student::display()
{
    cout << name << endl;
    cout << count << endl;
}
int Student::count;
int main()
{
    Student S1("Arvind");
    S1.display();
    Student S2 = Student("Yuvaan");
    S2.display();
}