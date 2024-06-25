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
int main(){
    Node* Node1= new Node(10);
    cout<<Node1->data<<endl;
    cout<<Node1->next<<endl;
}