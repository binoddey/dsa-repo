#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) {
    cout << "Stack: ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Print Stack: " << endl ;
    printStack(s);
    
    s.pop();
    cout << "Print Stack after pop: " << endl ;
    printStack(s);

    s.top();
    cout << "Print top of Stack : " << s.top()   <<endl ;

    cout << "Size: " << s.size() << endl;
    cout << "Empty: " << s.empty() << endl;
    return 0;
}