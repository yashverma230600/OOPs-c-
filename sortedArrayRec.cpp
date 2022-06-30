#include<iostream>
using namespace std;

int arrsort(int arr[],int n){
    if(n==1||n==0)
        return 1;
    
    if(arr[n-1]<arr[n-2])
        return 0;

    return arrsort(arr,n-1);
}

int main(){
    int arr[]={20,23,34,45,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    if(arrsort(arr,n))
        cout<<"yes";
    else
        cout<<"No";
}