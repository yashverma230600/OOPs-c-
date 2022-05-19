#include<iostream>
using namespace std;

class Abs{
    
        

    public:
    int a, b;

        //method to set values
        void set(int x,int y){
            a=x;
            b=y;
        }

        void display(){
            cout<<b<<" "<<a<<endl;
        }
};

int main(){

    Abs obj;
    obj.set(330,20);
    obj.display();
    return 0;


}