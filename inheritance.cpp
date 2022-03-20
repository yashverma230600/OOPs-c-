#include <iostream>
using namespace std;

// base class
class Employee
{
    int id;

public:
    float salary;
    Employee(int eid)
    {

        id = eid;
        salary = 34.0;
    }
};

// derived class
class programmer : Employee
{
public:
    int languageCode = 9;
}

int
main()
{
    Employee yash(1), rashi(2);
    cout << yash.salary << endl;
    cout << rashi.salary << endl;
    programmer skillF(1);
    return 0;
}