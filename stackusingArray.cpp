#include <bits/stdc++.h>
using namespace std;

struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }


void push(int x){
    if(top==cap-1){
        cout<<"full"<<endl;

    }
    top++;
    arr[top]=x;
}

int pop(){
    if(top==-1){
        cout<<"empty";
    }

    int res=arr[top];
    top--;
    return res;

}
};


int main()
{
    Mystack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    cout<<s.pop();

 
return 0;
}