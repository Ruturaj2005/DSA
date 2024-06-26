#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

void insertathead(Node*& head, int d) {
    if (head == nullptr) {
        Node* newnode = new Node(d);
        head = newnode;
    } else {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

void print(Node*& head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* populate(Node* list1, Node* list2) {
    if (list1->next == nullptr) {
        list1->next = list2;
        return list1;
    }

    Node* curr1 = list1;
    Node* next1 = curr1->next;
    Node* curr2 = list2;

    while (next1 != nullptr && curr2 != nullptr) {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            curr1->next = curr2;
            Node* next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        } else {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == nullptr) {
                curr1->next = curr2;
                return list1;
            }
        }
    }

    return list1;
}

Node* mergeTwoLists(Node* list1, Node* list2) {
    if (list1 == nullptr) {
        return list2;
    }
    if (list2 == nullptr) {
        return list1;
    }

    if (list1->data <= list2->data) {
        return populate(list1, list2);
    } else {
        return populate(list2, list1);
    }
}

int main() {
    Node* list1 = new Node(1);
    insertathead(list1, 3);
    insertathead(list1, 5);
    insertathead(list1, 7);

    Node* list2 = new Node(2);
    insertathead(list2, 4);
    insertathead(list2, 6);
    insertathead(list2, 8);

    cout << "List 1: ";
    print(list1);

    cout << "List 2: ";
    print(list2);

    Node* mergedList = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    print(mergedList);

    return 0;
}
