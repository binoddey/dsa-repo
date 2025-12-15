#include <iostream>
#include <queue>
using namespace std;

void printQueue(priority_queue<int, vector<int>, greater<int>> q) {
    cout << "Queue: ";
    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Print Queue: " << endl ;
    printQueue(q);
    
    q.pop();
    cout << "Print Queue after pop: " << endl ;
    printQueue(q);

    q.top();
    cout << "Print top of Queue : " << q.top()   <<endl ;

    cout << "Size: " << q.size() << endl;
    cout << "Empty: " << q.empty() << endl;
    return 0;
}