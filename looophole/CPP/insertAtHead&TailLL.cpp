#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = next;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
	
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	
	print(head);
	insertAtHead(head, 5);
	insertAtHead(head, 0);
	print(head);
	insertAtTail(tail, 12);
	insertAtTail(tail, 14);
	print(head);

    return 0;
}
