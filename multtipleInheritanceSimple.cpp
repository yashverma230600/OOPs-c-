#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Constructor of A"<<endl;
        }
};
class B {

    public:
        B(){
            cout<<"Constructor of B"<<endl;

        }
};
class D{
    public:
        D()[
            cout<<"Constructor of C"<<endl;
        ]
};

class C : public A,public B{
    public:
        C(){
            cout<<"Constructor of C"<<endl;
        }
};
int main(){
    C obj;

return 0;
}