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
Node* reversek(Node* head,int k){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    int cnt=0;
    
    while(curr!=NULL && cnt< k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    
    if(next!=NULL){
        head->next= reversek(next,k);
    }
    return prev;
}
int main() {
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,11);
    insertathead(head,12);
    insertathead(head,13);
    insertathead(head,14);
    print(head);
    head=reversek(head,2);
    print(head);
    

    return 0;
}