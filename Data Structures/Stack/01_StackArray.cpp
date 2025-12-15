#include <iostream>
using namespace std;

#define MAX 1000
int stack[MAX];
int top = -1;   
void push (int val){
    if(top == MAX - 1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        stack[++top] = val;
    }
}

void pop(){
    if(top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

void traverse(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack elements: ";
        for(int i = top; i >= 0; i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    push(30);
    push(38);
    push(89);
    pop();
    traverse();
    return 0;
}