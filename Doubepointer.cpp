#include<iostream>
using namespace std;
int main(){

    int i=5;
    int* ptr=&i;
    int** ptr2=&ptr;


    cout<<endl<<"Sab sahi chal rha hai dost"<<endl<<endl;



    cout<<"Printing 1st pointer ptr"<<ptr<<endl;
    cout<<"address of 1st pointer ptr"<<&ptr<<endl;
    cout<<"Printing 2nd pointer ptr2"<<ptr2<<endl;
    cout<<"address of 2nd pointer ptr"<<&ptr2<<endl;


    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<< **ptr2 <<endl;

return 0;
} 