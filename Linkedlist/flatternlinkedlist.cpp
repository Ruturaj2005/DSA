#include <iostream>
using namespace std;

// Definition for linked list.
class Node {
public:
    int data;
    Node *next;
    Node *child;
    Node() : data(0), next(nullptr), child(nullptr) {};
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};

Node* merge(Node* left, Node* right) {
    if (left == nullptr)
        return right;

    if (right == nullptr)
        return left;

    Node* ans = new Node(-1);
    Node* temp = ans;

    // Merge 2 sorted linked lists
    while (left != nullptr && right != nullptr) {
        if (left->data < right->data) {
            temp->child = left;
            temp = left;
            left = left->child;
        } else {
            temp->child = right;
            temp = right;
            right = right->child;
        }
    }

    while (left != nullptr) {
        temp->child = left;
        temp = left;
        left = left->child;
    }

    while (right != nullptr) {
        temp->child = right;
        temp = right;
        right = right->child;
    }

    ans = ans->child;
    return ans;
}

Node* flattenLinkedList(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    // Recursively flatten the next sublist
    head->next = flattenLinkedList(head->next);

    // Merge this list with the next list
    head = merge(head, head->next);

    return head;
}

// Utility function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->child = new Node(2);
    head->child->child = new Node(3);

    head->next = new Node(8);
    head->next->child = new Node(10);
    head->next->child->child = new Node(15);

    head->next->next = new Node(18);
    head->next->next->child = new Node(22);

    head->next->next->next = new Node(29);

    head = flattenLinkedList(head);
    printList(head);

    return 0;
}
