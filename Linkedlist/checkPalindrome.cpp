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
Node* findmiddle(Node* head){
        Node* slow=head;
        Node* fast=head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
bool isPalindrome(Node* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        
        Node* middle=findmiddle(head);

        middle->next=reverse(middle->next);

        Node* head1=head;
        Node* head2=middle->next;

        while(head2!=NULL){
            if(head1->data!= head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return true;

        middle->next=reverse(middle->next);
    }
int main() {
    Node* node1=new Node(1);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,3);
    insertathead(head,2);
    insertathead(head,0);
    print(head);
    bool ans=isPalindrome(head);
    cout<<ans;
    

    return 0;
}
