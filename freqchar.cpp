#include  "bits/stdc++.h"
using namespace std;

int main(){

    string s;cin>>s;
    vector<int> dict(256,-1);
    int mxl=0,start=-1;

    for(int i=0;i<s.size();i++){

        if(dict[s[i]]>start){
            start=dict[s[i]];


        }
        dict[s[i]]=i;
        mxl=max(mxl,i-start);

    }
    cout<<mxl;

}