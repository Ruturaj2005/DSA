#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  
  Node(int d){
      this->data=d;
      this->next=NULL;
  }
  
};
void insertathead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* newnode=new Node(d);
        head=newnode;
        tail=newnode;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
        
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
Node* removeduplicates(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr!=NULL){
        Node* forward=curr->next;
        Node* prev=curr;
        while(forward!=NULL){
            if(curr->data==forward->data){
                Node* nodetodelete=prev->next;
                prev->next=forward->next;
                forward=forward->next;
                delete(nodetodelete);
            }
            else{
                prev=forward;
                forward=forward->next;
            }
        }
        curr = curr->next;
    }
    return head;
}
int main() {
    Node* node1=new Node(9);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,tail,11);
    print(head);
    insertathead(head,tail,10);
    print(head);
    insertathead(head,tail,11);
    print(head);
    insertathead(head,tail,9);
    print(head);
    insertathead(head,tail,14);
    print(head);
    Node* new_head=removeduplicates(head);
    print(new_head);
    
    
    
    return 0;
}