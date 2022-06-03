#include<iostream>
using namespace std;

bool ischar(char c){
    return((c>='a' &&  c<'z') || (c>='A' && c<='z'));
}

bool isDigit(char c){
    return(c>='0' && c<='9');
}

bool isValid(string email){
    int at=-1;
    int dot=-1;
    string str="",str2="";
    for(int i=0;i<email.length();i++){

    if(email[i]=='@'){
        at=i;
        
    }
    else if(email[i]=='.'){
        dot=i;

    }
    
    }
    for(int i=at+1 ; i<dot;i++){
        str = email[i];
    }
    if(str=="yahoo" || str=="google"|| str=="wipro"){
        for(int i = dot+1 ; i<email.length();i++){
            str2 = email[i];
        }
        if(str == "com"){
            return true;
        }
        else{
            return false;
        }
    }

    return false;


}
int main(){

    string email;
    cin>>email;

    bool ans=isValid(email);
    if(ans){
        cout<<"valid";
    }
    else{
        cout<<"not";
    }

return 0;
}