#include<iostream>
using namespace std;


class Encapsulation
{
    private:
        int x;
    public:
        void set(int a){
            x=a;
        }
        int get(){
            return x;
        }
};
int main(){
    Encapsulation obj;
    obj.set(5);
    int c=obj.get();
    cout<<c;

return 0;
}