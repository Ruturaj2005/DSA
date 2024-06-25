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
void reverse(Node* &head,Node* curr,Node* prev){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }
    
    Node* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}
Node* reverselinkedlist(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    reverse(head,curr,prev);
    return head;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
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
    reverselinkedlist(head);
    cout<<"Now head points to:"<<head->data<<endl;
    print(head);

    return 0;
}