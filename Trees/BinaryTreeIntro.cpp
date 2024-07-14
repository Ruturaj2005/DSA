#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* BuildTree(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data == -1) {
        return NULL;
    }
    
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = BuildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = BuildTree(root->right);
    return root;
}
void LevelOrdertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void inordertraversal(Node* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void preorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root){
    //base case
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";
}
int main(){
    Node* root=NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = BuildTree(root);
    cout << "Printing the level order tracersal output " << endl;
    LevelOrdertraversal(root);
    
    cout << "inorder traversal is:  ";
    inordertraversal(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 
    
}