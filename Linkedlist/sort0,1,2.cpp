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
Node* sort(Node* head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    
    Node* curr=head;
    
    while(curr!=NULL){
        if(curr->data==0){
            zerocount++;
        }
        else if(curr->data==1){
            onecount++;
        }
        else if(curr->data==2){
            twocount++;
        }
        curr=curr->next;
    }
    
    curr=head;
    
    while(curr!=NULL){
        if(zerocount!=0){
            curr->data=0;
            zerocount--;
        }
        
        else if(onecount!=0){
            curr->data=1;
            onecount--;
        }
        
        else if(twocount!=0){
            curr->data=2;
            twocount--;
        }
        curr=curr->next;
    }
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
