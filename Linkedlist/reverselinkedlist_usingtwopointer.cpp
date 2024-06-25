#include <iostream>
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
void insertathead(Node* &head,int d){
    if(head==NULL){
        Node* newnode=new Node(d);
        head=newnode;
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
Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
            
    }
    head=prev;
    return head;
}
int main() {
    Node* head=NULL;
    insertathead(head,10);
    print(head);
    insertathead(head,11);
    print(head);
    insertathead(head,12);
    print(head);
    insertathead(head,13);
    print(head);
    insertathead(head,14);
    print(head);
    reverse(head);
    print(head);
    return 0;
}