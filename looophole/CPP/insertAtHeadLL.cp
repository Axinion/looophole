#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    // Constructor
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

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main() {
	
	Node* node1 = new Node(15);
	Node* head = node1;
	
	print(head);
	insertAtHead(head, 10);
	print(head);
	insertAtHead(head, 5);
	print(head);

}
