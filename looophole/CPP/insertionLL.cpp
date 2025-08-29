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

// insertion at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

// insertion at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

// insertion at position
void insertAtPosition(Node* &head, int pos, int d){
    Node* temp = head;
    int count = 1;
    while(count<pos){
        temp = temp -> next;
        count++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp ->next;
    temp -> next = nodeToInsert;
}

// print function
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
	
	Node* node1 = new Node(11);
	Node* head = node1;
	Node* tail = node1;
	
	print(head);
	insertAtHead(head, 5);
	insertAtHead(head, 0);
	print(head);
	insertAtTail(tail, 12);
	insertAtTail(tail, 16);
	print(head);
	insertAtPosition(head, 2, 10);
	insertAtPosition(head, 5, 14);
	print(head);
	
    return 0;
}
