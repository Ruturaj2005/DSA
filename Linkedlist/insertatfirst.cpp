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
    public:
    
};
void insertatfirst(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* Node1= new Node(10);
    cout<<Node1->data<<endl;
    cout<<Node1->next<<endl;
    Node* head=Node1;
    insertatfirst(head,12);
    print(head);

}