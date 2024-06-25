#include <iostream>
#include<map>
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
bool isloop(Node* &head){
    if(head==NULL){
        return NULL;
    }
    else
    {
        map<Node*,bool>visited;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(visited[temp]==true)
            {
            return 1;
            }
        
            visited[temp]=true;
            temp=temp->next;
        }
        return 0;
    }
}
int main() {
    Node* node1=new Node(9);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,tail,10);
    print(head);
    insertathead(head,tail,11);
    print(head);
    insertathead(head,tail,12);
    print(head);
    insertathead(head,tail,13);
    print(head);
    insertathead(head,tail,14);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    tail->next=head->next;
    cout<<isloop(head);
    
    
    return 0;
}