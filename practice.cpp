#include<iostream>
using namespace std;
int substring(string s1, string s2){
    int M = s1.length();
    int N = s2.length();

    for(int i=0;i<=N-M;i++){
        int j;
        for(j=0;j<M;j++){
            if(s2[i+j]!=s1[j])
                break;
            
        if(j==M){
                return i;
        }
            
            
        
        

    }
    return -1;
    }
}
    
int main(){
    string s1="for";
    string s2="geeksforgeeks";
    int r = substring(s1,s2);
    if(r==-1){        cout<<"Not present";
    }

    
    else{
        cout<<"present";
    }
  return 0;
}