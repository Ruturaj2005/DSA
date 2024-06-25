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
    ~Node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
    
};
void insertatvalue(Node* &tail,int value,int d){
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    // if linkedlist already exist
    else{
        Node* curr=tail;
        while(curr->data!=value){
            curr=curr->next;
            
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }
}
void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"Linked list is empty";
        return;
    }
    else
    {
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}
void print(Node* &tail){
    Node* temp=tail;
    Node* copy=tail;
    if(temp==NULL)
    {
        cout<<"List is empty";
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp->data!=copy->data);
    cout<<endl;
}
int main() {
    Node* tail = NULL;
    insertatvalue(tail, 5, 3);
    print(tail);
    insertatvalue(tail, 3, 4);
    print(tail);
    insertatvalue(tail, 4, 5);
    print(tail);
    insertatvalue(tail, 3, 2);
    print(tail);
    deleteNode(tail,2);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    deleteNode(tail,4);
    print(tail);
    return 0;
}