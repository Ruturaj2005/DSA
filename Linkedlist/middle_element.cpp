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
Node* findmiddle(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
Node* getmiddle(Node* head){
    return findmiddle(head);
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
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
    Node* middle=getmiddle(head);
    cout<<middle->data;
    

    return 0;
}