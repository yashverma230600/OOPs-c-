//swap 2 nos without using 3rd var

#include <iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"earlier "<<a<<" & "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"later "<<a<<" & "<<b<<endl;
}