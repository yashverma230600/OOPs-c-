#include <iostream>
using namespace std;

class Base
{
    int data1; // private bydefault
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData(void)
{ // void bcoz it doesnt take anything{
    data1 = 10;
    data2 = 20;
}
int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data1;
}
class derived : public Base
{ // class is beign derived pubillacly
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    data3 = data2 * getData1();
}
void derived::display()
{
    cout << "value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}

int main()
{
    derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}