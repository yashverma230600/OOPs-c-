
#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> s;

    s.push_back(20);
    s.push_back(5);
    s.push_back(1);
    s.push_back(9);

    s.push_back(1);
    cout<<"Elements in list are"<<endl;
    

    for(auto it:s){
        cout<<it<<" ";
    }
}