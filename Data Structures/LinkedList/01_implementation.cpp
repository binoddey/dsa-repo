#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    
    public:
    List () {
        head = NULL;
        tail = NULL;
    }

    void printList(){
    Node* temp = head;
    while (temp!=NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

};


int main(){
    List l;
    return 0;
}