#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12,23,35,14,95};

    int key;
    cout << "Enter key: ";
    cin >> key;
    
    for(int i=0; i<5; i++){
        if(arr[i] == key){
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}