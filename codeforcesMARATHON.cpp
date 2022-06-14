#include <iostream>
using namespace std;


int main() 
{
	int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        if(a>b&&a>c&&a>d){
            cout<<"0"<<end;
        }
        else if((a>b&&a>c)||(a>c&&a>d)||(a>c&&a>b)){
            cout<<"1"<<endl;
        }
        else if((a>b&&a>c&&a<d)||(a>c&&a>d&&a<b)||(a>d&&a>b&&a<c)){
            cout<<"1"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
        return 0;
    }
}

