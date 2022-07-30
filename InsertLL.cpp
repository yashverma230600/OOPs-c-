#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    } 
};

void *insertBeg(Node* head, int n){
    
    Node* temp=new Node(n);
    temp->next=head;
    return temp;


    
}




void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
}

int main()
{  Node* head=NULL;
head=insertBeg(head,10);

head=insertBeg(head,20);

head=insertBeg(head,30);
int n;
cin>>n;
insertBeg(head,n);
printlist(head);
 
return 0;
}