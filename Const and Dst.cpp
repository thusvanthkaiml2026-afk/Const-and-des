#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollNo;
    string name;

public:
    // Constructor
    student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }

    // Member function
    void display()
    {
        cout << "Roll number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    int x;
    string y;
    cout << " Enter your rollNo" << endl;
    cin >> x;
    cout << " Enter your Name" << endl;
    cin >> y;
    student S(x,y);
    S.display();

    return 0;
}   