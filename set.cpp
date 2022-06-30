
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;

    s.insert(20);
    s.insert(5);
    s.insert(1);
    s.insert(9);

    s.insert(1);
    cout<<"Elements in set are"<<endl;
    

    for(auto it:s){
        cout<<it<<" ";
    }
}