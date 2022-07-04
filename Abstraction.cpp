#include<iostream>
using namespace std;

class ABC{
    public:
        int a,b;

    void set(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    ABC obj;
    //Abstraction
    obj.set(5,7);
    obj.display();
    return 0;
}