#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v; // Declaration of vector
    v.push_back(1); // Inserting elements in vector
    cout << "Size:" << v.size() << endl; // Size of vector
    v.push_back(2);
    cout << "Size:" << v.size() << endl; // Size of vector
    v.push_back(3);
    cout << "Size:" << v.size() << endl; // Size of vector
    cout << "Capacity:" << v.capacity() << endl; // Capacity of vector
    v.push_back(4);
    v.push_back(5);
    v.pop_back(); // Removing last element from vector

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}