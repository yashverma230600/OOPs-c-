#include<iostream>
using namespace std;
int sum(int a){

    int r,s=0;
    
    while(a>0){
        r=a%10;
        
        
    if(r%2==0){
        s=s+r;
    }
    a=a/10;
    }
    return s;

}

int main(){
    int n;
    cin>>n;
    int add=sum(n);
    cout<<add;
    return 0;

}