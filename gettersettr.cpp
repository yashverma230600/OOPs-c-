#include <iostream>
using namespace std;

class hero{

    private:
    int health;
    char name;

    public:
    int gethealth(){
        return health;
    }
    char getname(){
        return name;
    }

    void sethealth(int h){
        health=h;
    }
    void setname(char ch){
        name=ch;
    }

};
int main(){
    hero ramesh;
    /setting values using setter
    ramesh.sethealth(75);
    ramesh.setname('y');
    //getting values using setter
    cout<<"ramesh health is "<<ramesh.gethealth()<<endl;
    cout<<"ramesh name is "<<ramesh.getname();


    return 0;




}