#include<iostream>
using namespace std;
class Base{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"virtual base"<<endl;
        }



};
class derived:public Base{
    public:
    void display(){
        int var_der=2;
        cout<<"derived"<<endl;
    }
};

int main(){
    Base *ptr;
    derived der;
    ptr=&der;
    ptr->display();
    return 0;
}