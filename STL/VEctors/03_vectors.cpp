#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3,4,5}; // Declaration of vector
    vec.erase(vec.begin()); // Removing first element
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    vec.erase(vec.begin() + 2); // Removing third element
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    vec.insert(vec.begin(), 10); // Inserting 10 at the beginning
    for(int i : vec){
        cout << i << " ";
    }
    return 0;
}