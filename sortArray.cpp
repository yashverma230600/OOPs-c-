#include<iostream>
using namespace std;

int main(){
    int arr[]={50,100,1,66,20,34,99,88};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp=0;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

            i=-1;

        }
    }
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        return 0;
    }

   
