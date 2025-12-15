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

    void pop_front(){
        if (head == NULL){
            cout << "LinkedList empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if (head == NULL){
            cout << "LinkedList empty";
            return;
        }
        Node* temp = head;
        while (temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int Search(int key){
        Node*temp = head;
        int idx=0;

        while (temp!= NULL){
            if (temp->data == key){ // Corrected: Compare data with key
                cout << "Element - " << key << " found at index: "<< idx << endl;
                return idx;
            }
            temp = temp-> next;
            idx++;
        }
        cout << "Element not found" << endl;
        return -1;
    }
};

int main(){
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);
    l.push_back(5);

    cout << "Push: " ;
    l.printList();

    cout << "Pop: ";
    l.pop_front();
    l.pop_back();
    l.printList();

    cout << "Search: ";
    l.Search(4);

    return 0;
}