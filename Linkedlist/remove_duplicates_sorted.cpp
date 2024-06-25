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
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node* next_next=curr->next->next;
            Node* nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next;
            
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
int main() {
    Node* node1=new Node(9);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,tail,10);
    print(head);
    insertathead(head,tail,10);
    print(head);
    insertathead(head,tail,11);
    print(head);
    insertathead(head,tail,11);
    print(head);
    insertathead(head,tail,14);
    print(head);
    Node* new_head=removeduplicates(head);
    print(new_head);
    
    
    
    return 0;
}