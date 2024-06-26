#include<iostream>
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
void insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sort(Node* head){
    Node* zeroHead=new Node(-1);
    Node* zerotail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* onetail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twotail=twoHead;
    
    Node* curr=head;
    
    while(curr!=NULL){
        int value = curr->data; 
        if(value==0){
            insertAtTail(zerotail,curr);
        }
        else if(value==1){
            insertAtTail(onetail,curr);
        }
        else if(value==2){
            insertAtTail(twotail,curr);
        }
        
        curr=curr->next;
        
    }
    //merging linkedlist
    
    if(oneHead->next!=NULL){
        zerotail->next=oneHead->next;
    }
    else{
        zerotail->next=twoHead->next;
        twotail->next=NULL;
    }
    onetail->next=twoHead->next;
    twotail->next=NULL;
    
    head = zeroHead->next;

    // Deleting dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}
int main() {
    Node* node1=new Node(1);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,0);
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,2);
    print(head);
    head=sort(head);
    print(head);
    
    

    return 0;
}
