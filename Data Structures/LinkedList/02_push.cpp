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

    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        }
        newNode -> next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
};

int main(){
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);
    l.push_back(5);
    l.printList();
    return 0;
}