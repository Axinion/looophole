// Stack Implementation using array

#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int size;
    int *arr;
    int top;
    
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int element){
        if(top<size){
            top++;
            arr[top] = element;
        }
        else{
            cout<< "Stack Overflow"<<endl;
        }
    }
    
    void pop(){
        if(top<0){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }
    
    void peek(){
        if(top>=0){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
     bool isEmpty(){
         if(top>=0){
             cout<<"Not empty"<<endl;
             return false;
         }
         else{
             cout<<"empty"<<endl;
             return true;
         }
     }
};

int main() {
	
	Stack s1(5);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.peek();
	s1.pop();
	s1.peek();
	s1.pop();
	s1.peek();
	s1.isEmpty();
	s1.pop();
	s1.isEmpty();

}
