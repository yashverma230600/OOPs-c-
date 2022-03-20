
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
//func return type that will return null if not found key. return node pointer where key value=node value
Node* searchInBST(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data=key){
        return root;
    }
    //data>key
    //search left tree
    if(root->data>key){
        return searchInBST(root->left,key);
    } 
        //data<key
        //search right tree
        else{
        return searchInBST(root->right,key);
        }
    
}
int main(){
        Node *root = new Node(4);
        root->left = new Node(2);
        root->right = new Node(5);
        root->left->left = new Node(1);
        root->left->right = new Node(3);
        root->right->right = new Node(6);

        if(searchInBST(root,969) == NULL){
            cout<<"key not exist";
        }
        else {
            cout<<"key exist";
        }

        return 0;

    }
